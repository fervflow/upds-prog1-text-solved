#include <iostream>
using namespace std;
int main(){
    int n;
    bool p;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++)
        cin >> v[i];
    cin >> p;
    for(int i = 0; i < n; i++){
        if(v[i] % 2 && p)
            cout << v[i] << ' ';
        if(!(v[i] % 2) && !p)
            cout << v[i] << ' ';
    }
}
