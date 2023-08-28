#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n < 100)
        (n % 2 ? n *= 2: n += 3);
    cout << n;
}
