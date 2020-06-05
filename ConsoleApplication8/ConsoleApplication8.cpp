


#include <iostream>

#include <string>

#define tab "\t"

// Чи є автомобiлi однiєї моделi в автопарковi?





using namespace std;



class car1 {

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

    int  b, d, f;

    char a;

    char c;

    cout << "Введите имя машини типа - 1:" << endl;

    cin >> a;

    cout << "Ввдите количество машин типа - 1:" << endl;

    cin >> b;

    cout << "Введите имя машини типа - 2:" << endl;

    cin >> c;

    cout << "Ввдите количество машин типа - 2:" << endl;

    cin >> d;

    cout << "Ввдите количество максимальное количство машин на автопарковке:" << endl;

    cin >> f;

    car1 chartA;

    chartA.num = a;

    chartA.number_in = b;

    cout << " Имя машин 1го типа:" << chartA.num << endl;

    cout << tab"Количество машин типа - 1 на парковке:" << chartA.number_in << endl;

    car1  chartB;

    chartB.num = c;

    chartB.number_in = d;

    cout << endl << "Имя машин 2го типа: " << chartB.num << endl;

    cout << tab"Количество машин типа - 2 на парковке:" << chartB.number_in << endl;

    carpark Y;

    Y.num_of_cars = f;

    Y.name = "Карпарковка";

    cout << endl << " Максимальное количество машин на парковке: " << Y.num_of_cars << endl;

    cout << "Имя парковки:" << Y.name << endl;





    if (b + d == f || b + d > f)

    {

        cout << "Парковка забита" << endl;

    }

    /* if (b + d > f)

     {

         cout << "overlayed park" << endl;

     }
     */
    else {

        cout << "Парковка свободна. Свободных мест:"<< f - (b+d) << endl;

    }
    if (a < c || a > c)
    {

        cout << "Машин одного названия нету!" << endl;

    }
    else
    {
        cout << "Машин одного названия:" << b + d << endl;
    }



    return 0;
}

/* (charactersticsA.number_in + chartB.number_in = Y.num_of_cars) ? cout << "full park" : cout << "freepark";

      (chartB.num = charactersticsA.num) ? cout << "cars are similar" : cout << "cars arent similar"

      */




