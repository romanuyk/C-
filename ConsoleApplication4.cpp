#include <iostream>
using namespace std;
int main()
{
    std::cout << "Romanyuk IPZI - 18k. obrobka ryadkiv 244 A";
    setlocale(0, "");
    char a[9] = { 'g','o','-','g', 'o',' ', 'd','o','g' };
    char b[4] = { 'g', 'o', 'o', 'd' };
    int u = 0;
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 9; i++)
        {
            if (a[i] == b[j]) {
                u++;
                a[i] = 'K';
                b[j] = 'Y';
            }
        }
    }
    if (u >= 4)
    {
        cout << "-Можливо" << "\n";
    }
    else {
        cout << "-Не можливо" << "\n";
    }
    return 0;
}
