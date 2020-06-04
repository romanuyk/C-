
#include <iostream>

using namespace std;
int main() {
    cout << "Roamnyuk IPZI-18k. exrcise 142 rivnya a nerekursivni funkciyi" << "\n";
    int a, b, nok;
    cin >> a >> b;
    for (int nod = a; nod > 0; nod--) {
        if (a % nod == 0 && b % nod == 0) {
            cout << "N=" << nod << "\n";
            nok = (a * b) / a, b;
            cout << "K=" << nok << "\n";
            break;
            
        }
   }
   return 0;
}