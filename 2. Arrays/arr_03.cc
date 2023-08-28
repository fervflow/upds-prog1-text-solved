#include <iostream>
using namespace std;
int main(){
    int n;
    bool eight_found = false;
    cin >> n;
    int v[n];
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(v[i] == 8)
            eight_found = true;
    }
    cout << eight_found;
}
