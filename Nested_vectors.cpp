#include<iostream>
#include<vector>
using namespace std;

void printVec(vector<pair<int,int> > &v){
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

}
int main(){
    vector<pair<int,int> > v={{1,2},{3,4},{5,6},{7,8}};
    printVec(v);
    swap(v[0],v[3]);
    printVec(v);
    return 0;
}