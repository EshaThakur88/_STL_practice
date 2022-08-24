#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int> p1)
{
    cout << "size of vector => no.of elements in vector: " << p1.size() << endl;
    for (int i = 0; i < p1.size(); i++)
    {
        cout << p1[i] << " ";
    }
    cout << endl;
}

int main()
{
    // declaring, initialising and printing pair p
    pair<int,string> p;
    // 2 menthods to initialise pair p
    // 1. p= make_pair(2,"abc");
    // 2. direct method
    p={2,"abc"};

    pair<int, string> &p1=p;
    p1.first=4;
    cout<<p.first<<" "<<p.second<<endl<<endl;

    // pairs in array-> elements are inter-related n 2 arrays
    // swap first and third element of  1st array so should happn in 2nd array also.

    /*int a[]={1,2,3};
    int b[]={4,5,6}; */

    pair<int,int>p_array[3];
    p_array[0]={1,4};
    p_array[1]={2,5};
    p_array[2]={3,6};

    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    swap(p_array[0], p_array[2]);
    for(int j=0;j<3;j++){
        cout<<p_array[j].first<<" "<<p_array[j].second<<endl;
    }

    // VECTORS
    vector<int> v;
    int n;
    cout<<"n=";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout<<"enter "<<i+1<<" element: ";
        cout<<endl;
        cin >> x;
        v.push_back(x);
    }
    printVec(v);

    return 0;
}