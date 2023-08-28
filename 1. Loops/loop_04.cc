#include <iostream>
using namespace std;
int main(){
    int m, n, mov_length, total_length = 0;
    cin >> m >> n;
    while(n-- && cin >> mov_length){
        total_length += mov_length;
    }
    cout << (total_length > m ? "NO" : "SI");
}
