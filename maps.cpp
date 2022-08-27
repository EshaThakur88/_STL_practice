#include<iostream>
#include<map>
using namespace std;


void printMap(map<int, string> &m){
    cout<<"size of map: "<<m.size()<<endl;
    for(auto &pr: m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main() {
    /* maps every element is a pair {key, value}, it is not of continuous nature
       iterator can be it++and not it+1
       key/value can be any complex or basic data type
       keys of a map are unique, if you give 2 vaue to key it will update the value of key to the most recent one.*/
    map<int, string > m;
    m[1]="abc"; //O(log(n))
    m[7]="def";
    m[2]="ghi";
    m[5]="jkl";
    m.insert({4,"mno"}); //O(log(n))
    // // 1 method
    // map<int, string> :: iterator it;
    // for(it=m.begin();it!=m.end();it++){
    //     cout<<(it->first)<<" "<<(it->second)<<endl;
    // }
    // cout<<endl;
    // // 2 method
    // for(auto &value: m){
    //     cout<<value.first<<" "<<value.second<<endl;
    // }
    auto it=m.find(4); //returns iterator of 3, if no ietrator then returns the m.end(), O(log(n)).
    m.erase(it); //can take key or iterator's value
    if(it==m.end()){
        cout<<"No Value";
    }else{
        cout<<"found key and it's value is: ";
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    m.clear();
    printMap(m);
    // time complexity of insertion, accessing element in map is O(nlog(n)) for n elements.

    /* inserting a string as a key will not keep the time complexity as O(log(n)), 
       it will make it log(n).{s.size()}, i.e. the size of string * time complexity of insertion in map. 
       As map stores keys in sorted manner, therefore it will do comparisons in order to attain that, 
       therefore comparing strings when given as key is time taking. */
       
    return 0;
}