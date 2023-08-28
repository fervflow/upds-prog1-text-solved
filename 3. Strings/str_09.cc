#include <iostream>
using namespace std;
int main(){
    int tam;
    string s;
    cin >> tam >> s;
    if(tam > 10)
        cout << s[0] << tam << s[tam-1];
    else
        cout << s;
}
