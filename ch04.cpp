#include <iostream>
using namespace std;



class Vehicle{
    public:
        void drive(){
            cout << "The Vehicle is driving" << endl;
        }
};

class Boat:Vehicle{
    public:
        void drive(){
            cout << "The Boat is driving" << endl;
        }
};

class Car:Vehicle{
    public:
        void drive(){
            cout << "The Car is driving" << endl;
        }
};

class Plane:Vehicle{
    public:
        void drive(){
            cout << "The Plane is driving" << endl;
        }
};

int max_num(int a[]){
    int max =  INT_MIN;
    int len = sizeof(a)/sizeof(a[0]);

    for(int i = 0; i < len; i++){
        if(a[i] > max) max = a[i];
    }

    return max;
}

int main(){

    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << max_num(arr) << endl;

    Vehicle v;
    v.drive();
    Boat b;
    b.drive();
    Car c;
    c.drive();
    Plane p;
    p.drive();

    return 0;
}