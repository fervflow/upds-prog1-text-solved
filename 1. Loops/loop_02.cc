#include <iostream>
using namespace std;
int main(){
    int n, x, y;
    cin >> n;
    while(n-- && cin >> x >> y){
        if(x == y)
            cout << "NO ITZMAN";
        else{
            if(x < y){
                int z = x;
                x = y;
                y = z;
            }
            cout << x;
        }
        cout << endl;
    }
}
