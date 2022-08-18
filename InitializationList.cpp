#include<bits/stdc++.h>
using namespace std;


/*
Syntax for initialization list in constructor:
    constructor(argument-list) : initialization-section{
        assignment + other Code;
    }

    Eg : 
        struct Node
        {
            int data;
            Node* left;
            Node* right;
            Node() : data(-1), left(NULL), right(NULL) {}
            Node(int x) : data(x), left(NULL), right(NULL) {}
        }

*/
class Test{
    int i;
    int j;
    public:
        Test() : i(0), j(0){
            cout << "constructor executed" << endl;
        }

        // works fine
        // Test(int x, int y) : i(x), j(y) {
        //     cout << "Done" << endl;
        // }

        // works fine as well
        // Test(int x, int y) : i(x), j(i + y) {
        //     cout << "Done" << endl;
        // }
 
        // works but with bugs -> as i is declared first it must be assigned first otherwise for "j" garbage values would be considered
        // whatever is declared first that should be initialized first.
        Test(int x, int y) : j(y), i(j + x) {
            cout << "Done" << endl;
        }

        void printVal(){
            cout << "Values of i and j are : " << i << " " << j << endl;
        }
};



int main(){

    Test t;
    t.printVal();
    Test t2(10, 20);
    t2.printVal();

    return 0;
}