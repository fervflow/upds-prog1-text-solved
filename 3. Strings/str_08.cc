#include <iostream>
using namespace std;
int main(){
    string s;
    int haches = 0;
    getline(cin >> ws, s);
    if(s[0] == 'h' || s[0] == 'H') haches++;
    for(int i=1; i<s.size(); i++){
        if((s[i] == 'h' || s[i] == 'H') && s[i-1] == ' ')
            haches++;
    }
    cout << haches << " haches";
}
