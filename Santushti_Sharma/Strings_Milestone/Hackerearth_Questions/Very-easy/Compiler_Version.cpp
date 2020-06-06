#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;

    while(getline(cin, s)) {

        int flag = 1;

        for(int i = 0; i < s.length(); ++i) {

            if(s[i] == '/' && s[i + 1] == '/') {

                flag = 0;
            }
            if(s[i] == '-' && s[i+1] == '>' && flag) {

                s[i] = '.';
                s.erase(s.begin()+ i+ 1);
            }
        }
        
        cout<<s<<"\n";
    }
    return 0;
}
