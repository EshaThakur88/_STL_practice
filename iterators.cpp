#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // iterators for vectors
    vector<int> v = {2, 3, 5, 7, 11};
    cout << "elements of vector:" << endl;
    // using indices
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // using iterator
    vector<int>::iterator it = v.begin();
    cout << (*(it + 1)) << endl;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << (*it) << " ";
    }
    cout << endl;
    // always remember it++ is different froom it+1,
    // because it++ says to move to next location in the memory of the container but it+1 only moves to the adjacent memory's next block
    // for containers like vector it is okay, but for containers like map it is not right.
    // it++ -> next iterator & it+1 -> next location

    // iterator for pairs
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};
    vector<pair<int, int>>::iterator itt;
    cout << "elements of pair v_p: " << endl;
    // using dot notation
    for (itt = v_p.begin(); itt != v_p.end(); itt++)
    {
        cout << (*itt).first << " " << (*itt).second << endl;
    }
    cout << endl;
    // using arrow notation
    for (itt = v_p.begin(); itt != v_p.end(); itt++)
    {
        cout << (itt->first) << " " << (itt->second) << endl;
    }
    // (*it).first <=> (it->first)



    // using RANGE BASED LOOPS
    // Range based loops help us to iterate on containers directly on elements .
    cout<<"Elements using range based loops: ";
    for(int value: v){
        cout<<value<<" ";
    }
    cout<<endl;

    cout<<"VALUE IS COPY OF V WITHOUT USING REFERENCE: ";
    for(int value: v){
        value++;
    }
    for(int value: v){
         cout<<value<<" ";
    }
    cout<<endl;
    cout<<"VALUE IS COPY OF V USING REFERENCE: ";
    for(int &value: v){
        value++;
    }
    for(int value: v){
        cout<<value<<" ";
    }
    cout<<endl;
    // always remember value is having only copy of v, if you make any changes on value that will not affect v.
    // for not just making copy of v, we can use reference  to actually making changes to v by making any change to value.
    // reference helps accessing actual values.

    // using AUTO keyword
    // AUTO keyword replaces the big iterator declaration statement.
    cout<<"elements of  pair vp using auto and normal for loop and iterators: "<<endl;
    vector<pair<int,int> > vp={{5,6},{7,8}};
    for(auto it=vp.begin(); it!=vp.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;;
    }
    cout<<endl;

    cout<<"elements of pair vp using auto and enhanced for loop/range based for loop: "<<endl;
    for (auto &value: vp)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    cout<<endl;
    
    
    return 0;
}