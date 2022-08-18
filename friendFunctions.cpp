#include<bits/stdc++.h>
using namespace std;

class Complex{
    int a, b;
    protected: 
        int c;
    public:
        void setNumber(int n1, int n2, int n3){
            a = n1;
            b = n2;
            c = n3;
        }

        friend Complex sumComplex(Complex a, Complex b);

        friend void printC(Complex x);

        void printNum(){
            cout << "Your number is : " << a << " + "<< b << "i" << endl;
            return;
        }
};

void printC(Complex o1){
    cout << "C is : " << o1.c;
    return;
}

Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber(o1.a + o2.a, o1.b + o2.b, 0);
    return o3;
}



int main()
{
    Complex c1, c2, sum;

    c1.setNumber(2, 6, 10);
    c1.printNum();
    
    c2.setNumber(5, 8, 12);
    c2.printNum();

    sum = sumComplex(c1, c2);
    sum.printNum();

    printC(c1);

    return 0;
}