#include <iostream>

using namespace std;

class A
{
    int a1;
    float a2;

public:
    void setA1(int _a1)
    {
        _a1 = a1;
    }

    void setA2(float _a2)
    {
        _a2 = a2;
    }

    int getA1(int a1)
    {
        return a1;
    }

    float getA2(float b2)
    {
        return b2;
    }

    void MA1()
    {
        cout << "Método: MA1" << endl;
    }

    void MA2()
    {
        cout << "Método: MA2" << endl;
    }
};

class B
{
    int b1;
    float b2;

public:
    void setB1(int _b1)
    {
        _b1 = b1;
    }

    void setB2(float _b2)
    {
        _b2 = b2;
    }

    int getB1(int b1)
    {
        return b1;
    }

    float getB2(float b2)
    {
        return b2;
    }

    void MB1()
    {
        cout << "Método: MB1" << endl;
    }

    void MB2()
    {
        cout << "Método: MB2" << endl;
    }
};

int main()
{
    A classeA;
    B classeB;

    classeA.MA1();
    classeA.MA2();

    classeB.MB1();
    classeB.MB2();

    return 0;
}