
#include<iostream>
using namespace std;

int main() {
    std::cout << "romanyuk ipzi-18k. zavdanya 89 A\n";
    int A[10][10], n = 10;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            A[i][j] = rand() % 10 - 5;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n\n\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; ++j) {
            if (A[i][j] < 0)A[i][j] = 0;
            if (A[i][j] > 0)A[i][j] = 1;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    system("PAUSE");
}