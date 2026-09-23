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
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
   
}
int main(){
    vector<int> vec={1,2,3,4,2};
    dub(vec);
    return 0;
}
