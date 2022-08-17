#include<bits/stdc++.h>
using namespace std;
/*
Case 1: 
class B : public A{
    //order of execution of constructo -> first A then B
};

Case 2:
class C : public B, public A{
    //order of execution of constructo -> first B then A and the C
};

Case 3:
class A:  public B, virtual public C{
    // first virtual class constructor is executed, i.e, C.
    //then B and then A.
}
*/


class Base1{
    int data1;
    public:
        Base1(int a){
            data1 = a;
            cout << "Base1 class constructor called : " << endl;
        }
        void printDataBase1(){
            cout << "The value of data1 is : " << data1 << endl;
        }
};

class Base2{
    
    int data2;

    public:
        Base2(int a){
            data2 = a;
            cout << "Base2 class constructor called : " << endl;
        }
        void printDataBase2(){
            cout << "The value of data is : " << data2 << endl;
        }
};

class Derived : public Base1, public Base2 {
    int derived1, derived2;

    public:
        Derived(int a, int b, int c, int d): Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout << "Derived class constructor called" << endl;
        }
        void printDataDerived(){
            cout << "The value of derived1 is : " << derived1 << endl;
            cout << "The value of derived2 is : " << derived2 << endl;
        }
};


int main(){

    Derived d(1,2,3,4);
    d.printDataBase1();
    d.printDataBase2();
    d.printDataDerived();


    return 0;
}