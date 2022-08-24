#include<iostream>
#include<vector>
using namespace std;

void printVec(vector<int> &v){
    cout<<"size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<< " ";
    }
    cout<<endl;
    
}




// in arrys of vector the row number isfixed and the columns numbers could vary.
int main(){
    cout<<"Enter the numbers of arrays you want in the vector: ";
    int N;
    cin>>N;
    vector<int> v[N];
// this loop will take one-one vector
    for(int i=0; i<N; i++){
        cout<<"Enter size of each array in vector: ";
        int n;
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }

    cout<<v[0][2];
    
    return 0;
}
// to keep the rows as well as columns both dynamic we will use vectors of vectors.....