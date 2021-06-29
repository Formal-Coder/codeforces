#include <iostream>
using namespace std;

int main(){
    int a,b,t,sum;
    cin >> t;
    for (int n=1;n<=t;n++){
        cin >> a >> b;
        sum = a+b;
        cout << sum << endl;
    }
    return 0;
}