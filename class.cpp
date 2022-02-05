#include <iostream>
#include <string>

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

    float getA2(float a2)
    {
        return a2;
    }

    void MA1()
    {
        cout << "Método: MA1" << endl;
    }

    void MA2()
    {
        cout << "Método: MA2" << endl;
    }

    void MA3()
    {
        cout << "Alteração a classe A partir do clone" << endl;
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

    void MB3()
    {
        cout << "Método: MB3" << endl;
    }
};

class C
{
    string c1;
    int c2;

public:
    void setC1(string _c1)
    {
        _c1 = c1;
    }

    void setC2(int _c2)
    {
        _c2 = c2;
    }

    string getC1(string c1)
    {
        return c1;
    }

    int getC2(int c2)
    {
        return c2;
    }

    void MC1()
    {
        cout << "Método: MC1" << endl;
    }

    void MC2()
    {
        cout << "Método: MC2" << endl;
    }

    void MC3()
    {
        cout << "Método: MC3" << endl;
    }
};

class D
{
    int d1;
    int d2;

public:
    void setD1(int _d1)
    {
        _d1 = d1;
    }

    void setD2(int _d2)
    {
        _d2 = d2;
    }

    int getD1(int d1)
    {
        return d1;
    }

    int getD2(int d2)
    {
        return d2;
    }

    void MD1()
    {
        cout << "Método: MD1" << endl;
    }

    void MD2()
    {
        cout << "Método: MD2" << endl;
    }
};

int main()
{
    A classeA;
    B classeB;
    C classeC;
    D classeD;

    classeA.MA1();
    classeA.MA2();

    classeB.MB1();
    classeB.MB2();
    classeB.MB3();

    classeC.MC1();
    classeC.MC2();
    classeC.MC3();

    classeD.MD1();
    classeD.MD2();

    return 0;
}