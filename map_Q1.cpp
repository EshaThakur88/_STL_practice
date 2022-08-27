/*Given N strings, print unique strings in 
lexiographical order with their frequency.
N<=10^5
|S|<=100
*/

#include<iostream>
#include<map>
using namespace std;

int main(int argc, const char** argv) {
    map<string, int> m;
    int N;
    cin>>N;
    for(int i=0; i<N; i++){
        string s;
        cin >> s;
        m[s]++;
    }
    for(auto p
    r
     : m){
       cout<<pr.first<<" "<<pr.second<<endl;
    }
    
    
    
    return 0;
}