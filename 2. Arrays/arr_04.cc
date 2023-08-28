#include <iostream>
using namespace std;
int main(){
    int n, diff = 0, max_int = -2147483648;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] > max_int)
            max_int = v[i];
    }
    for(int i = 0; i < n; i++)
        if(v[i] == max_int)
            diff++;
    cout << n - diff << endl;
    for(int i = 0; i < n; i++)
        if(v[i] != max_int)
            cout << v[i] << ' ';
}
