#include<bits/stdc++.h>
using namespace std;

class A {
    public:
        void func1(){
            cout << endl << "Inside func 1" << endl;
            return;
        }
};

class B : public A {
    public: 
    void func2(){
        cout << endl << "Inside func 2" << endl;
        return;
    }
};

class C : public A {
    public: 
    void func3(){
        cout << endl << "Inside func 3" << endl;
        return;
    }
};

int main(){

    B b;
    C c;

    c.func1();
    c.func3();

    b.func1();
    b.func2();


    return 0;
}