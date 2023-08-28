#include <iostream>
using namespace std;
int main(){
    string s;
    int valid_lectures = 0;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 101)
            valid_lectures++;
    }
    cout << valid_lectures;
}
