#include <iostream>
using namespace std;
int main(){
    int n;
    bool is_greater = true;
    cin >> n;
    int v[n], b[n];
    for(int i = 0; i < n; i++)
        cin >> v[i];
    for(int i = 0; i < n; i++){
        cin >> b[i];
        if(b[i] >= v[i])
            is_greater = false;
    }
    cout << is_greater;
}
