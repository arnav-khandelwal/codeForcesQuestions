#include<bits/stdc++.h>
using namespace std;

#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Asquare cout.tie(NULL);


int main() {
    string s;
    cin >> s;
    unordered_set<char> st;
    for(char c : s){
        st.insert(c);
    }
    st.size() % 2 == 0 ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";
    return 0;
}
