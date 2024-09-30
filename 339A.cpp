#include<bits/stdc++.h>
using namespace std;
 
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Asquare cout.tie(NULL);
 
//sorting by using stringstream and vector
/*
int main() {
    string s;
    cin >> s;
    stringstream ss(s);
    string c;
    vector<string> v;
    while(getline(ss, c, '+')){
        v.push_back(c);
    }   
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size() - 1; i++){
        cout << v[i] << '+';
    }
    cout << v[v.size() - 1];
    return 0;
}
*/

// three pointer 
int main() {
    string s;
    cin >> s;
    int l = 0, m = 0, h = s.length() - 1;
    while( m <= h){
        if(s[m] == '+') continue;
        else if(s[m] == '1'){
            swap(s[l], s[m]);
            l+=2;
            m+=2;
        }
        else if(s[m] == '2') m+=2;
        else {
            swap(s[h], s[m]);
            h-=2;
        }
    }
    cout << s;
    return 0;
}
