#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int v[n];
    for(int i = 0; i < n && cin >> v[i]; i++);
    for(int i = 0; i < n; i++)
        if(!(v[i] % 2))
            cout << v[i] << ' ';
    for(int i = 0; i < n; i++)
        if(v[i] % 2)
            cout << v[i] << ' ';
}
