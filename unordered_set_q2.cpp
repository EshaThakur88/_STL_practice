/*
Given N string and Q queries,
In each query you are given a string
print yes if string is present
else prnt no.
*/

#include<iostream>
#include<unordered_set>
using namespace std;

int main(int argc, char const *argv[])
{
    unordered_set<string> us;
    int N;
    cin>>N;

    for (int i = 0; i < N; i++)
    {
        string in;
        cin>>in;
        us.insert(in);
    }
    for(auto &st: us){
        cout<<st<<" ";
    }
    cout<<endl;

    int q;
    cin>>q;

    // for(int i=q; i>=1; i--){
    //     string str;
    //     cin>>str;
    //     if(us.find(str)==us.end()){
    //         cout<<"No"<<endl;
    //     }
    //     else{
    //         cout<<"Yes"<<endl;
    //     }
    // }

    while(q--){
        string str;
        cin>>str;
        if(us.find(str)==us.end()){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    
    
    return 0;
}


