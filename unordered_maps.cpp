#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    unordered_map <int,string> umap;
    umap[2]="abc";
    umap[0]="rhb";
    umap[4]="thg";
    umap[3]="bgj";
    for(auto &pr: umap){
        cout<<pr.first<<" "<<pr.second<<endl;
    } 

    /*DIFFERENCE BETWEEN MAPS AND UNORDERED_MAP:
    1. inbuilt implementation(map-> trees 7 unordered_map-> hash tables)
    2. time complexity (map-> O(log(n)) & unordered_map->O(1))
    3. valid keys datatype (map-> any primitive or complex data type is supported & unordered_map-> only basic/primitve data types are supported)
    */
    
    
    
    return 0;
}