#include <iostream>
using namespace std;
int main(){
    int num_g;
    cin >> num_g;
    string g[num_g], ans, w;
    bool ans_g[num_g] = {0};
    for(int i=0; i<num_g; i++){
        cin >> g[i] >> ans;
        if(ans == "Si") ans_g[i] = 1;
    }
    cin >> w;
    for(int i=0; i<num_g; i++){
        if(w == g[i] && ans_g[i]){
            cout << "Si";
            return 0;
        }
    }
    cout << "No";
}
