#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;

    cin>>t;

    while(t--) {

        int n, k;

        cin>>n>>k;

        string s;

        cin>>s;

        for(int i = 0; i < n; ++i) {

            if(s[i] >= 65 && s[i] <= 91) {
                
                if((s[i] -64 + k)%26) {
                 
                    s[i] = ((s[i] -64 + k)%26 +64);
                }
                
                else {
                    
                    s[i] = 'Z';
                }
            }
            
        
            if(s[i] >= 97 && s[i] <= 123) {

                if((s[i] -96 +k)%26) {
                 
                    s[i] = ((s[i] -96 + k)%26 +96);
                }
                
                else {
                    
                    s[i] = 'z';
                }
            }

            if(s[i] >=48 && s[i] <=57) {

                s[i] = ((s[i] -48 +k)%10 +48);
            }
        }

        cout<<s<<"\n";
    }

    return 0;
}
