#include <iostream>
using namespace std;


int main() {
    int n=0;
    int a=0;
    int b=1;
    int c=0;


    cin >> n ;

    for (int i=0; i<(n+1); i++){

        c=a+b;

        if(c<=n){

            cout << c << endl;

        b=a;

        a=c;
        }

    }

    return 0;
}
