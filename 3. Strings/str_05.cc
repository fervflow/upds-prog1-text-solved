#include <iostream>
#include <string>
using namespace std;
int main(){
    int n, spaces;
    string s;
    cin >> n;
    while(n--){
        getline(cin >> ws, s);
        spaces = 0;
        for(int i=0; i<s.size(); i++)
            if(s[i] == ' ')
                spaces++;
        cout << spaces << endl;
    }
}
