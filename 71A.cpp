#include<bits/stdc++.h>
using namespace std;
 
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Asquare cout.tie(NULL);
 
int main() {
    int t; 
    cin >> t;
    for(int i = 0; i < t; i++){
        string s;
        cin >> s;
        int n = s.length();
        if(n <= 10) {
            cout << s << endl;
        }
        else {
            string newWord = s[0] + to_string(n-2) + s[n-1];
            cout << newWord << endl;
        }
    }
    return 0;
}
