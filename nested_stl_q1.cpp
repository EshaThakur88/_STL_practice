#include<iostream>
#include<map>
#include<set>
using namespace std;

int main(int argc, char const *argv[])
{
    map<int, multiset<string> > m;
    int N;
    cin>>N;
    for (int i = 0; i < N; i++)
    {
        string str;
        cin>>str;
        int marks;
        cin>>marks;
        m[-1*marks].insert(str); //m[-1*marks]-> is a multiset i.e. why we use insert operation as used in sets.
    }
         
    for(auto &pr: m){
        auto &student_name=pr.second;
        int student_marks=pr.first;
        for (auto student: student_name){
            cout<<student<<" "<<-1*student_marks<<endl;
        }
        {
            /* code */
        }
        
    }
    
    return 0;
}

