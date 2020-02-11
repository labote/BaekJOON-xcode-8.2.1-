//
//  Problem2294.cpp
//  BaekJOON
//
//  Created by 홍민성 on 2020. 2. 9..
//  Copyright © 2020년 Labote. All rights reserved.
//

#include <iostream>
#define MAX 100001
#define COIN 101

using namespace std;

int dp[MAX];
int coin[COIN];
int n,k;

void DP(){
    
    for(int i=1;i<=k;i++){
        dp[i]=MAX;
    }
    for(int i=1;i<=k;i++){
        for(int j=0;j<n;j++){
            if(i-coin[j]>=0){
                dp[i]=min(dp[i],dp[i-coin[j]]+1);
            }
        }
    }
    if(dp[k]==MAX){
        cout << -1 << endl;
    }
    else{
        cout << dp[k] << endl;
    }
}

int main(){
    cin >> n >> k;
    
    for(int i=0;i<n;i++){
        cin >> coin[i];
    }
    
    DP();
}
