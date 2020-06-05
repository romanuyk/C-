#include <iostream>
#include <string>
#define tab "\t"
// Чи є автомобiлi однiєї моделi в автопарковi


using namespace std;

class car1{
public:
    int pow1;
    string num;
    int number_in;

};
class carpark {
public:
    int num_of_cars;
    string name;
   
};

/*class car2 {
public:
    int pow2;
    string num2;
};
*/
int main()
{
    setlocale(LC_ALL, "rus");
    cout << tab tab"Романюк ИПЗИ - 18к. Задание 304 А темы(Робота со структурами)." << endl;
    int  b,  d, f;
    string a;
    string c;
    cin >>  a;
    cout << "cin name of car1:" << endl;
    cin >> b;
    cout << "cin num of cars1:" << endl;
    cin >> c;
    cout << "cin name of car2:" << endl;
    cin >> d;
    cout << "cin num of cars2:" << endl;
    cin >> f;
    cout << "cin num of cars in park:" << endl;
    car1 chartA;
    chartA.pow1 = 10;
    chartA.num = a;
    chartA.number_in = b;
    cout << "num of car1- " << chartA.num << endl;
    cout << tab"pow of car1 = " << chartA.pow1 << endl;
    cout << tab"cars A in -  " << chartA.number_in << endl;
    car1  chartB;
    chartB.num = c;
    chartB.pow1 = 20;
    chartB.number_in = d;
    cout << endl << "num of car2- " << chartB.num << endl;
    cout << tab"pow of car2= " << chartB.pow1 << endl;
    cout << tab"cars B in -  " << chartB.number_in << endl;
    carpark Y;
    Y.num_of_cars = f;
    Y.name = "CF";
    cout << endl << "num of cars: " << Y.num_of_cars << endl;
    cout << "name of park - " << Y.name << endl;
    if (b + d = f) {
        cout << "max cars in park" << endl;
    }
        if (b+d > f)
        {
            cout << "overlayed park" << endl;
        } 
        else {
            cout << "free park" << endl;
        }
    
   /* (charactersticsA.number_in + chartB.number_in = Y.num_of_cars) ? cout << "full park" : cout << "freepark";
        (chartB.num = charactersticsA.num) ? cout << "cars are similar" : cout << "cars arent similar"
        */
        
    }

    return 0;

    
}


