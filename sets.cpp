#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

/*
-> use header file <set> for set and multiset.
-> use header file <unordererd_set> for unordered_set.
*/

void print(set<string> &m)
{
    cout << m.size() << endl;
    for (auto &st : m)
    {
        cout << st << " ";
    }
    cout << endl;
}

void printO(unordered_set<string> &m)
{
    cout << m.size() << endl;
    for (auto &st : m)
    {
        cout << st << " ";
    }
    cout << endl;
}

void printM(multiset<string> &m)
{
    cout << m.size() << endl;
    for (auto &st : m)
    {
        cout << st << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    /*
    SETS:
    -> Sets are similar to what we have learnt in maps, except map have key and values,
       here in sets we have only unique keys, placed in a order.
    -> They have same complexity like maps i.e. log(n), they are also build using red black trees implementation
    -> They have same operations like in map, insert, find, erase, etc....
    -> These all functions have same complexities of log(n).
    -> SETs stores only unique keys.
    */

    set<string> s;
    s.insert("abc"); // logn(n)
    s.insert("vbh");
    s.insert("pgh");
    s.insert("dbh");
    s.insert("abc");

    auto it = s.find("abc");
    s.erase(it);
    print(s);

    /*
    UNORDERED SETS:
    -> use this unordered sets when you just want  to known whether the value is present or not,
       and the order of the elements doesn't bother you.
    -> Hash tables are used to implement this, time complexity-> O(n) for n elements.
    -> Complex data types are not supported, if your wnat to use define your own hash functions.
    */

    unordered_set<string> us;
    us.insert("abc"); // O(1)
    us.insert("vbh");
    us.insert("pgh");
    us.insert("dbh");
    us.insert("abc");
    auto itt = us.find("abc"); // O(1)
    us.erase(itt);             // O(1)
    printO(us);

    /*
    MULTISETS:
    -> we can have duplicate values in set i.e. we can insert multiple values in a set.
    -> prints in sorted manner.
    -> have time complexities of operations - O(log(n)). 
    */
    multiset<string> ms;
    ms.insert("agh");
    ms.insert("sgh");
    ms.insert("pgh");
    ms.insert("mmh");
    ms.insert("pgh");

    auto itm = ms.find("pgh"); //O(log(n))
    if (itm != ms.end())
    {
        ms.erase(itm);
    }

    // ms.erase("pgh"); 
    /* REMEMBER, erasing elements by using iterator 
       deletes the elements on which the iterator currently pointing.
       Whereas, deleting elements by directly using elements, deletes all those same elements.
    */
   
    printM(ms);

    return 0;
}
