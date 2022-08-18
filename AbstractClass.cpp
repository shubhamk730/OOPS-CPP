#include<bits/stdc++.h>
using namespace std;

class base{
    public:     
        virtual void display() = 0; //pure virtual function
};

class derived : public base{
    public:
        int x = 10;
        void display(){
            cout << "Hello "<< x << endl;
        }
};

int main(){
    base* bptr = new derived();

    return 0;
}