#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int v[n], b[n];
    bool are_equal = true;
    for(int i = 0; i < n; i++)
        cin >> v[i];
    for(int i = 0; i < n; i++){
        cin >> b[i];
        if(v[i] != b[i])
            are_equal = false;
    }
    cout << are_equal;
}
