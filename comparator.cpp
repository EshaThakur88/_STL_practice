#include<bits/stdc++.h> 
using namespace std;

bool should_i_swap(pair<int,int> a, pair<int,int> b){
    if(a>b) return true;
    return false;
}
int main(int argc, const char** argv) {
    int N;
    cin>>N;
    vector<pair<int,int>> vect(N);
    for (int i = 0; i < N; i++)
    {
        cin>>vect[i].first>> vect[i].second;
    }
    
    // sort(vect.begin(),vect.end());
    for (int i = 0; i <N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            if(should_i_swap(vect[i], vect[j])) 
                swap(vect[i],vect[j]);
        }
        
    }
    
    for (auto i: vect)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    return 0;
}