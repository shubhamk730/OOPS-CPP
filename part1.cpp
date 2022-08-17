#include<bits/stdc++.h>
#include "Hero.cpp"
using namespace std;

// empty class has memory of 1 byte
// class Hero {

//     //properties
//     string name;
//     int health;
//     int level;
// public :
//     Hero(string n, int h, int l){
//         name = n;
//         health = h;
//         level = l;
//     }
//     string getInfo(){
//         return name + " " + to_string(health) + " " +to_string(level);
//     }

// };


// initialising static variable
int Hero::count = 10;

int main(){
    
    // Hero* h = new Hero("shubham", 500, 56);
    // cout<< h->getInfo();

    // cout << sizeof(Hero) << endl;
    Hero h("shubham", 500, 56);
    // Hero* h2  = new Hero("natsu", 9, 9);
    // h.setLevel(67);
    // h.setName("Saviour");

    // cout<< h.getInfo() << endl;
    // cout<< h2->getInfo();
    // cout<< (*h2).getInfo();

    //copy constructor : passing the object to the constructor
    // Hero sk(h);
    // cout<< sk.getInfo() << endl;
    // sk.setName("copy used");
    // delete h2;

    // cout<< Hero::count << endl;
    cout<< Hero::getCount() << endl;

    return 0;
}