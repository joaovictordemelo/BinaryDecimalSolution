

#include <bits/stdc++.h>

using namespace std;

void test(){
    
    int n;
    cin >> n;
   
    int ans = 0;
    while(n != 0){
        
        int lasDig = n%10;
        ans = max(ans, lasDig);
        n /= 10;
    }
    cout << ans << endl;
}

int main(){
    
    int t;
    cin >> t;
    while(t--){
        
        test();
    }
    
}