#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;


void print(set<string> &m){
    cout<<m.size()<<endl;
    for(auto &st: m){
        cout<<st<<" ";
    }
    cout<<endl;
}

int main(int argc, char const *argv[])
{
    // SETS

    /*
    -> Sets are similar to what we have learnt in maps, except map have key and values,
       here in sets we have only unique keys, placed in a order.
    -> They have same complexity like maps i.e. log(n), they are also build using red black trees implementation
    -> They have same operations like in map, insert, find, erase, etc....
    -> These all functions have same complexities of log(n).
    -> SETs stores only unique keys.
    */

    set<string> s;
    s.insert("abc"); //logn(n)
    s.insert("vbh");
    s.insert("pgh");
    s.insert("dbh");
    s.insert("abc");

    auto it=s.find("abc");
    s.erase(it);
    print(s);

    //UNORDERED SETS  
    unordered_set<string> us;
    us.insert()


    return 0;
}
