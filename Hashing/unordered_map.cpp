#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;


int main()
{
    // unordered_map<string,int>umap;
    // umap["aa"]=2;
    // umap["bb"]=3;
    // umap["cc"]=4;

    // for(auto x:umap) cout<<x.first<<" "<<x.second<<endl;

    

    // string key = "aa";
    // if(umap.find(key) == umap.end()){
    //     cout<<"not found"<<endl;
    // }
    // else{
    //     auto temp = umap.find(key);
    //     cout<<"key is "<<temp->first<<endl;
    //     cout<<"value is "<<temp->second<<endl;
    // }

    // umap.insert(make_pair("mobile", 17000));

    // for(auto itr = umap.begin(); itr!=umap.end(); itr++)
    // cout<<itr->first<<" "<<itr->second<<endl;

    int arr[] = {1, 3,2,3,5,7,7,3,4,0,3,5,6,3};
    unordered_map<int, int>umapped;

    for(int i=0;i<15; i++)
    {
        int key = arr[i];
        umapped[key]++;

    }

    for(auto itr=umapped.begin(); itr!=umapped.end();itr++)
    cout<<itr->first<<" "<<itr->second<<endl; 

} 