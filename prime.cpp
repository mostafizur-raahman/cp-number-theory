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
int main(){

    cout << checkPrimeOrderOfN(17) << endl;
    cout << checkPrimeOrdrOfSQRT(17);

}