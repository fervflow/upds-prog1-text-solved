#include <iostream>
using namespace std;
int main(){
    int n, q, i, x;
    cin >> n >> q;
    int v[n] = {0};
    for(int j = 0; j < q; j++){
        cin >> i;
        cin >> v[i];
    }
    for(int j = 0; j < n; j++)
        cout << v[j] << ' ';
}
