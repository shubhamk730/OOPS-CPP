#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int a;
    int b;

    A(){
        cout << "A created "<< endl;
    }
    void sayHello(){
        cout << "Hello Shubham " << endl;
    }

    void sayHello(string name){
        cout << "Hello " << name << endl;
    }

    // valid -> different signatures -> string and cahr
    void sayHello(char a){
        cout << "Hello " << a << endl;
    }

    // for achieving polymorphism fn signature must be different, return type does not matter
    // int sayHello(){
    //     cout << "Hello Shubham " << endl;
    //     return 1;
    // }


    //operator overloading
    void operator + (A &x){
        int v1 = this -> a;
        int v2 = x.a;
        cout << "Output : " << v2 - v1 << endl;
        return; 
    }

    void operator() () {
        cout << "I am bracket " << this->a << endl;
    }
    
    // error
    // void operator::() {
    //     cout << "I am bracket " << this->a << endl;
    // }
};

//  Run time polymorphism implementation through method over riding
class Animal{
    public:
    Animal(){
        cout << "Animal created" << endl;
    }
    void speak(){
       cout << "Speaking " << endl;
    }
};

class Dog : public Animal, public A{
    public:
    Dog(){
        cout << "Dog created"<< endl;
    }
    void speak(){
        cout << "I don't speak I bark " << endl;
    }
};

int main(){

    //compile time polymorphism

    // method(function) overloading
    // A a;
    // a.sayHello();
    // a.sayHello("Stranger");

    // operator overloading
    // A o1;
    // A o2;
    // o1.a = 4;
    // o2.a = 9;
    // o1 + o2;
    // cout << 4 + 5 << endl;
    // o1();

    // run time polymorphism(method overriding)
    Dog d;
    d.speak();



    return 0;

}