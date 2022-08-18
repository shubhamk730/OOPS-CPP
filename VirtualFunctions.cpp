#include<bits/stdc++.h>
using namespace std;

class Base{
    public:
        int var1;
        virtual void display(){
            cout << "Displaying base class variable var 1 : " << var1 << endl;
            return;
        }
};

class Derived : public Base{
    public:
        int var2;
        void display(){
            cout << "Displaying base class variable var1 in derived : " << var1 << endl;
            cout << "Displaying derived class variable var 2 : " << var2 << endl;
            return;
        }
};

int main(){
    Base* b = 0;
    Derived* d = 0;
    
    Base o1;
    Derived obj2;

    b = &obj2;  //base class pointer pointing to derived class
    d = &obj2;

    b->var1 = 35;
    

    b->display();


    return 0;
}