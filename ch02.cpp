#include <iostream>
#include <string>
using namespace std;


int sum(int a, int b, int c){
    return a + b + c;
}

float avg(int a, int b, int c){
    return ((float)sum(a, b, c))/3.0;
}

int cubed(int x){
    return x * x * x;
}

int main(){
    int a, b, c;

    cout << "Enter 3 numbers seperated by newlines: " << endl;
    cout << "1. ";
    cin >> a;
    cout << "2. ";
    cin >> b;
    cout << "3. ";
    cin >> c;

    int s = sum(a, b, c);
    float av = avg(a, b, c);

    cout << "sum: " << s << endl;
    cout << "avgerage: " << av << endl;

    return 0;
}