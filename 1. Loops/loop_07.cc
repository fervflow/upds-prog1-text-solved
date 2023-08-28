#include <iostream>
using namespace std;
int main(){
    int a, b, x = 0, y = 1, cont = 0;
    cin >> a >> b;
    while(y < b){
        if(y > a) cont++;
        y = x + y;
        x = y - x;
    }
    cout << cont;
}
