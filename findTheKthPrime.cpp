#include <bits/stdc++.h>
using namespace std;

// seive 
const int N = 86028121;
bool isPrime[N+1];
vector<int> ds;

void createSieve(){
    for(int i = 2; i <= N; i++){
        isPrime[i] = true;
    }

    for(int i = 2; i*i <= N; i++){
        if(isPrime[i]){
            for(int j = i*i; j <= N; j += i){
                isPrime[j] = false;
            }
        }
    }
    for(int i = 2; i <= N; i++){
        if( isPrime[i] ){
            ds.push_back(i);
        }
    }
}



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);


    int tc;
    cin >> tc;
    createSieve();
    while( tc--){
        int n;
        cin >> n;
        cout << ds[n-1] << "\n";
    }

    return 0;

}