


#include <iostream>

#include <string>

#define tab "\t"

// �� � �������i�i ���i�� �����i � ����������i?





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

    cout << tab tab"������� ���� - 18�. ������� 304 � ����(������ �� �����������)." << endl;

    int  b, d, f;

    char a;

    char c;

    cout << "������� ��� ������ ���� - 1:" << endl;

    cin >> a;

    cout << "������ ���������� ����� ���� - 1:" << endl;

    cin >> b;

    cout << "������� ��� ������ ���� - 2:" << endl;

    cin >> c;

    cout << "������ ���������� ����� ���� - 2:" << endl;

    cin >> d;

    cout << "������ ���������� ������������ ��������� ����� �� ������������:" << endl;

    cin >> f;

    car1 chartA;

    chartA.num = a;

    chartA.number_in = b;

    cout << " ��� ����� 1�� ����:" << chartA.num << endl;

    cout << tab"���������� ����� ���� - 1 �� ��������:" << chartA.number_in << endl;

    car1  chartB;

    chartB.num = c;

    chartB.number_in = d;

    cout << endl << "��� ����� 2�� ����: " << chartB.num << endl;

    cout << tab"���������� ����� ���� - 2 �� ��������:" << chartB.number_in << endl;

    carpark Y;

    Y.num_of_cars = f;

    Y.name = "�����������";

    cout << endl << " ������������ ���������� ����� �� ��������: " << Y.num_of_cars << endl;

    cout << "��� ��������:" << Y.name << endl;





    if (b + d == f || b + d > f)

    {

        cout << "�������� ������" << endl;

    }

    /* if (b + d > f)

     {

         cout << "overlayed park" << endl;

     }
     */
    else {

        cout << "�������� ��������. ��������� ����:"<< f - (b+d) << endl;

    }
    if (a < c || a > c)
    {

        cout << "����� ������ �������� ����!" << endl;

    }
    else
    {
        cout << "����� ������ ��������:" << b + d << endl;
    }



    return 0;
}

/* (charactersticsA.number_in + chartB.number_in = Y.num_of_cars) ? cout << "full park" : cout << "freepark";

      (chartB.num = charactersticsA.num) ? cout << "cars are similar" : cout << "cars arent similar"

      */




