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
    // without taking input
    vector<pair<int,int> > v={{1,2},{3,4},{5,6},{7,8}};
    printVec(v);
    swap(v[0],v[3]);
    printVec(v);
    
    // taking input from user
    vector<pair<int,int> > p;
    cout<<"Enter the size of vector you want: ";
    int n;
    cin>>n;
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<"Enter "<<i<<" elements: "<<endl;
        int x,y;
        cin>>x>>y;
        p.push_back({x,y});
    }
    printVec(p);




    return 0;
}