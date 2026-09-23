#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Profit(vector<int>& prices){
    vector<int> vec;
    int n=prices.size();
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>0 && j>i;j--){
            if(prices[j]-prices[i]>0){
                vec.push_back(prices[j]-prices[i]);
            }
        }
    }
    sort(vec.rbegin(),vec.rend());
    if(!vec.empty()){
        cout<<vec[0]<<endl;
    }
    else{
        cout<<0<<endl;
    }
   
}

int main(){
    vector<int> vec={0,7,1,5,3,6,4};
    
    Profit(vec);
    return 0;
}