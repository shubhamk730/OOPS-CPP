#include<bits/stdc++.h>
using namespace std;

template<class T,  class N>
class Hero {

    //properties
    T name;
    N health;
    N level;
public :
    Hero(T n, N h, N l){
        name = n;
        health = h;
        level = l;
    }
    string getInfo(){
        return this->name + " " + to_string(health) + " " +to_string(level);
    }

};

int main(){
    
    Hero<string, int>* h1 = new Hero<string, int>("shubham1", 500, 56);
    // Hero<string, int> h = Hero<string, int>("shubham", 500, 56);
    Hero<string, int> h("shubham", 500, 56);
    cout<< h.getInfo();
    cout<< h1->getInfo();

    return 0;
}