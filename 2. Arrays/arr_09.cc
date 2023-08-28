#include <iostream>
using namespace std;
int main(){
    int n, erased_num;
    bool not_found = true;
    cin >> n;
    int v[n], b[n];
    for(int i = 0; i < n; i++)
        cin >> v[i];
    for(int i = 0; i < n-1; i++){
        cin >> b[i];
        if(v[i] != b[i]){
            erased_num = v[i];
            not_found = false;
        }
    }
    if(not_found)
        erased_num = v[n-1];
    cout << erased_num;
}
