#include <bits/stdc++.h>
using namespace std;

// seive 
const int N = 1000000;
int seive[N+1];

void createSieve(){
    for(int i = 2; i <= N; i++){
        seive[i] = 1;
    }

    for(int i = 2; i*i <= N; i++){
        if(seive[i] == 1){
            for(int j = i*i; j <= N; j += i){
                if(seive[j] != 0 ){
                    seive[i]++;
                    seive[j] = 0;
                }
            }
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
        cout << seive[n] << "\n";
    }

    return 0;

}