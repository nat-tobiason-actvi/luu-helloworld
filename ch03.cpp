#include <iostream>
using namespace std;


bool isLeapYear(int y){
    return ( (!(y % 4) && (y % 100)) || !(y % 400));
}

void print_factors(int n){
    cout << "Factors of " << n << " are: ";  
    for(int i = 1; i <= n; ++i) {
        if(n % i == 0)
            cout << i << " ";
    }
}
int main(){

    int year = 1999;

    if(isLeapYear(year)) cout << "is leap year" << endl;
    else cout << "not leap year" << endl;

    int f = 876;
    print_factors(f);

    return 0;
}