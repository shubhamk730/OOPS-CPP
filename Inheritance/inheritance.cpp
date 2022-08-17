#include<bits/stdc++.h>
using namespace std;

class Human{
    public: 
    int height;
    int weight;
    int age;
    public:
    int getAge(){
        return this->age;
    }

    int setWeight(int w ){
        this->weight = w;
        return this->weight;
    }
};

//single inheritance
class Male : protected Human{
    public:
    string color;
    void sleep(){
        cout << endl << "Male is sleeping "<< endl;
    }

    public:
    int setWeight(int x){
        this->weight = x;
        return this->weight;
    }

};

//following multi level inheritance Human -> Male -> Student;
class Student : public Male{

};


// follows multiple inheritance
class Husband : public Human, public Male{

};


int main(){

    Male obj1;
    cout << obj1.setWeight(45) << endl;
    // cout << obj1.weight << endl;
    obj1.sleep();
    Student s;
    cout << s.setWeight(85) << endl;
    s.sleep();

    Husband h;

    // Inheritance ambiguity
    // to remove ambiguity as both amle and human class have setWeight function
    h.Male::setWeight(45);  


    return 0;
}