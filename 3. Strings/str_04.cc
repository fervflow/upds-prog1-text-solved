#include <iostream>
using namespace std;
int main(){
    int n, s_size;
    bool bold, non_bold;
    string s;
    cin >> n;
    while(n--){
        cin >> s_size >> s;
        bold = non_bold = 0;
        for(int i=0; i<s_size && (!bold || !non_bold); i++){
            (s[i] == 'B' ? bold = 1 : non_bold = 1);
        }
        if(bold && non_bold)
            cout << "Some bold";
        else{
            if(bold)
                cout << "Bold";
            else
                cout << "Non bold";
        }
        cout << endl;
    }
}
