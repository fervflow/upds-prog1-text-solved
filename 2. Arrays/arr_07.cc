#include <iostream>
using namespace std;
int main(){
    int n;
    bool abel = true;
    cin >> n;
    if(n > 0){
        int v[n];
        cin >> v[0];
        for(int i = 1; i < n; i++){
            cin >> v[i];
            if(v[i] == v[i-1])
                abel = false;
        }
    }
    else abel = false;
    if(abel)
        cout << "ABEL ERES UN GRANDE";
    else
        cout << "LO SIENTO ABEL... DAVID SE QUEDA CON TODAS";
}
