#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n;
    while(n-- && cin >> m && m >= 0){
        if(m > 6)
            cout << 7;
        else if(m > 5)
            cout << 6;
        else if(m > 2)
            cout << 5;
        else
            cout << 0;
        cout << endl;
    }
}
