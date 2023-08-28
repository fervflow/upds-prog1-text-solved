#include <iostream>
using namespace std;
int main(){
    int n, ticket_num, fh, sh, mid;
    fh = sh = 0;
    cin >> n;
    mid = n/2;
    while(n-- && cin >> ticket_num){
        (n >= mid ? fh += ticket_num : sh += ticket_num);
    }
    cout << fh + (fh == sh ? 0 : sh) << ' ' << (fh == sh);
}
