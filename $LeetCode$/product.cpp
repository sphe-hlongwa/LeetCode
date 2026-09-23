#include <iostream>
#include <vector>
using namespace std;

void sub(vector<int> &array){
    for(int i=0;i<array.size();i++){
        for(int j=i+1;j<array.size();j++){
        cout<<array[j]<<" ";}
        cout<<":"<<i<<": "<<endl;
    }
}
int main(){
vector<int> vec={-2,1,-3,4,-1,2,1,-5,4};
sub(vec);
return 0;
   
}