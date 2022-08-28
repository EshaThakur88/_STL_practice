/*
Q1-> Given n strings, print unique strings in lexographical order.
N<= 10^5
|s|<= 100000;
*/


#include<iostream>
#include<set>
using namespace std;



int main(int argc, char const *argv[])
{
    set<string> s;
    int N;
    cin>>N;

    for(int i=0; i<N; i++){
        string in;
        cin>>in;
        s. insert(in);
    }

    for( auto &st: s){
        cout<<st<<" ";
    }
    cout<<endl;

    return 0;
}
