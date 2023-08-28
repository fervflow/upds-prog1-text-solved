#include <iostream>
using namespace std;
int main(){
    int n, k, exit_door = -1;
    cin >> n >> k;
    int v[n];
    for(int i = 0; i < n; i++){
        cin >> v[i];
        if(v[i] == k)
            exit_door = i;
    }
    (exit_door != -1 ? cout << exit_door : cout << "Poyo :(");
}
