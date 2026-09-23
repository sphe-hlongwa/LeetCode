#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void sum(vector<int> & vec){
    int add=0;
    for(int i{0};i<vec.size();i++){
        add+=vec[i];
        if(add==0){
            cout<<vec[i];

        }
        
    }
}
int main(){

    vector<int> vec{-2,1,-3,4,-1,2,1,-5,4};
    sum(vec);
    return 0;
}
