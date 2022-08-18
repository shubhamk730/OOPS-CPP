#include<bits/stdc++.h>
using namespace std;

// Forward declaration
// to ensure compiler does not throw error when we try to access Complex type in calculator.
class Complex;

class Calculator{
    public:
        int add(int a, int b){
            return a + b;
        }

        //function declaration as compiler does not know if complex will have a&b or not.
        int sumComplexReal(Complex , Complex);

        int sumComplexImaginary(Complex , Complex );
};

class Complex{
    int a, b;
    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }

        // individually declaring function of other class as friend.
        friend int Calculator::sumComplexReal(Complex a, Complex b);

        // every function of friend class gets access to private data of this class.
        friend class Calculator;

        void printNum(){
            cout << "Your number is : " << a << " + "<< b << "i" << endl;
            return;
        }
};



int Calculator::sumComplexReal(Complex o1, Complex o2){
    return o1.a + o2.a;
}

int Calculator::sumComplexImaginary(Complex o1, Complex o2){
    return o1.b + o2.b;
}


int main(){

    Complex o1, o2;
    o1.setNumber(2, 6);
    o2.setNumber(3, 5);

    Calculator c;
    cout << "Sum of real part is : " << c.sumComplexReal(o1, o2) << endl;
    cout << "Sum of imaginary part is : " << c.sumComplexImaginary(o1, o2) << endl;


    return 0;
}