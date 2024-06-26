#include <bits/stdc++.h>
using namespace std;

bool checkPrimeOrderOfN(int n){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0) cnt++;
    }
    if( cnt == 2) {
        return true;
    }
    return false;
    
}

bool checkPrimeOrdrOfSQRT(int n){
    int cnt = 0;

    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            cnt++;
            if( n/i != i ){
                cnt++;
                if( cnt == 2 ) break;
            }
        }
    }
    if( cnt == 2 ) return 1;
    else return 0;
}

// print the sum by its factor like n = 5 = dividor(1,5) = sum is 1 + 5 = 6 and n = 6 sum is = 6 + 2 + 3 +1 = 12

int sumOfItsAllFactor(int n){
    int sum = 0;

    for(int i = 1; i*i <= n; i++){
        if(n % i == 0){
            sum += i;
            if( n/i != i ){
                sum += (n/i);
            }
        }
    }
    return sum;
}

// seive 
const int N = 100;
bool seive[N+1];
void createSieve(){
    for(int i = 2; i <= N; i++){
        seive[i] = true;
    }

    for(int i = 2; i <= N; i++){
        if(seive[i]){
            for(int j = i*i; j <= N; j += i){
                seive[j] = false;
            }
        }
    }
    for(int i = 2; i <= N; i++){
        if(seive[i]) cout << i << endl;
    }
}

// find the kth prime


int main(){

    // cout << checkPrimeOrderOfN(17) << endl;
    // cout << checkPrimeOrdrOfSQRT(17) << endl;
    // cout << sumOfItsAllFactor(5) << endl;

    // createSieve();

}