#include <iostream>
#include <vector>

using namespace std;

void dub(vector<int>&vec){
    int n=vec.size();
    vector<int> dub;
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>0 && j>i;j--){
            if(vec[i]==vec[j]){
                dub.push_back(vec[i]);
            }
        }
    }
    if(!dub.empty()){
        for(int m:dub){
            cout<<m<<" ";
            cout<<endl;
        }
        
    }
   
}
int main(){
    vector<int> vec={1,2,3,1,2,4,5,6,4};
    // bool isTrue=true;
    // isTrue=(vec,isTrue);
    // if(isTrue==true){
    //     cout<<"true"<<endl;
    // }
    // else{
    //     cout<<"false"<<endl;
    // }
    dub(vec);
    return 0;
}
