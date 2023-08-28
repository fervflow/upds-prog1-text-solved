#include <iostream>
using namespace std;
int main(){
    int n, b, times_found = 0;
    cin >> n;
    int v[n];
    for(int i = 0; i < n; i++)
        cin >> v[i];
    cin >> b;
    for(int i = 0; i < n; i++)
        if(v[i] == b)
            times_found++;
    cout << times_found;
}
