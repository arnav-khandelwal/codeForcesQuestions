#include<bits/stdc++.h>
using namespace std;

#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Asquare cout.tie(NULL);


int main() {
    int t; 
    cin >> t;
    int aT[t], bT[t];
    for(int i = 0; i < t; i++){
        cin >> aT[i] >> bT[i];
    }
    for(int i = 0; i < t; i++){
        int a = aT[i], b = bT[i];
        bool aEven = a%2 == 0, bEven = b%2 == 0;
        if(a == 0 && bEven || b == 0 && aEven) cout << "YES";
        else if(aEven && a!=0) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    return 0;
}
