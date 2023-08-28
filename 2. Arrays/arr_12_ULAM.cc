#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    bool ulam[100000] = {0};
    ulam[n] = 1;
    while(n > 1){
        if(n%2)
            n = n*3+1;
        else
            n /= 2;
        ulam[n] = 1;
    }
    for(int i=0; i<100000; i++){
        if(ulam[i])
            cout << i << ' ';
    }
}
