#include<bits/stdc++.h>
using namespace std;

class Hero {

    //properties
    string name;
    int health;
    int level;

    public :
    static int count;
    Hero(string n, int h, int l){
        name = n;
        health = h;
        level = l;
        count++;
    }

    static int getCount(){
        return count;
    }

    // copy constructor
    // Hero(Hero temp){     //gives error as 
    // it creates infinite loop while creating copy of pass by value

    // remove error by passing by reference
    Hero(Hero &temp){
        this->health = temp.health;
        this->name = temp.name;
        this->level = temp.level;
    }

    string getInfo(){
        return name + " " + to_string(health) + " " +to_string(level);
    }

    int getLevel(){
        return level;
    }

    string getName(){
        return name;
    }

    void setLevel(int x){
        this->level = x;
        cout<<"Level is now : "<< this->level << endl;
    }

    void setName(string x){
        name = x;
        cout<<"Name is now : "<< name << endl;
    }

    ~Hero(){
        cout << "Destructor called for object having name : " << this->name << endl;
        count--;
    }

};