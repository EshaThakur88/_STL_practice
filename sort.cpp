#include <bits/stdc++.h>
using namespace std;



int main(int argc, const char** argv) {
    int N;
    cin>>N;
    vector<int> vec(N);
    while(N--)
    {
        int value;
        cin>>value;
        vec.push_back(value);
    }
    
    for(auto i: vec){
        cout<<i<<" ";
    }

    sort(vec.begin(),vec.end());
    for(auto i: vec){
        cout<<i<<" ";
    }
    
    return 0;
}