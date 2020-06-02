
#include <iostream>
#include <cstdlib>
#include <time.h>

int main(int argc, char* argv[]) {
    srand(time(0));
    std::cout << "Романюк ИПЗИ-18к. задания 6 уровня А\n";

    const int size = 20;
    int max = 0, min = 0;

    int a[size] = { 0 };

    for (int i = 0; i < size; i++) {
        a[i] = rand() % 100;
        std::cout << a[i] << ' ';
    }

    std::cout << std::endl;

    max = a[0];
    min = a[0];

    for (int i = 1; i < size; i++) {
        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];
    }

    std::cout << "The minimum length of the number axis: " << max - min << std::endl;


    std::cout << std::endl;
    return 0;
}