#include <iostream>
using namespace std;
int main(){
    string s;
    int c, v;
    c = v = 0;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'A'  || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'
           || s[i] == 'a'  || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' ||
           s[i] == 'u')
            v++;
        else if((s[i] > 64 && s[i] < 91) || (s[i] > 97 && s[i] < 123))
            c++;
    }
    cout << c+v << endl << v << endl;
    for(int i=s.size()-1; i>=0;  i--)
        cout << s[i];
}
