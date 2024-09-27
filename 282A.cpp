#include<bits/stdc++.h>
using namespace std;
 
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Asquare cout.tie(NULL);
 
int main() {
    int t; 
    cin >> t;
    int x = 0;
    for(int i = 0; i < t; i++){
        string s;
        cin >> s;
        char check = s[0]=='X'? s[1]:s[0];
        switch (check) {
            case '+':
                x++;
                break;
            default:
                x--;
                break;
        }
    }
    cout << x << endl;
    return 0;
}
