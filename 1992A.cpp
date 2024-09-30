#include<bits/stdc++.h>
using namespace std;

#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Asquare cout.tie(NULL);

int min(int a, int b, int c) {
    return std::min(a, std::min(b, c));
}

int max(int a, int b, int c) {
    return std::max(a, std::max(b, c));
}

int main() {
    int t; 
    cin >> t;
    for(int i = 0; i < t; i++){
        int a, b, c;
        cin >> a >> b >> c;

        int mini = min(a, b, c);
        int maxi = max(a, b, c);
        int mid = a + b + c - mini - maxi;

        if(mid - mini >= 5) {
            cout << (mini+5) * mid * maxi << endl;
            continue;
        }

        int add = 5;
        while(add > 0){
            int toAdd = min(add, mid - mini); 
            if (toAdd == 0) toAdd = 1;  
            mini += toAdd;  
            add -= toAdd;   
            int sum = mini+mid+maxi;
            mini = min(mini, maxi, mid);   
            maxi = max(mini, maxi, mid);  
            mid = sum - mini - maxi;
        }

        cout << mini * mid * maxi << endl;
    }
    return 0;
}
