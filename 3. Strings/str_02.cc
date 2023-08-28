#include <iostream>
using namespace std;
int main(){
    string s;
    int c, v;
    c = v = 0;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            v++;
        else
            c++;
    }
    cout << c << ' ' << v;
}
