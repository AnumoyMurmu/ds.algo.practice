#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<string> s;
    s.insert("a");
    s.insert("b");
    s.insert("c");
    s.insert("c");
    s.insert("d");

    // s.clear();
    // cout << s.size() << endl;

    // int key = 12;
    // if(s.find(key) == s.end()){
    //     cout<<"not found";
    // }
    // else{
    //     s.erase(key);
    // }

    for (auto it = s.begin(); it != s.end(); it++)
        cout << (*it) << endl;

        string key = "f";
        if(s.find(key)==s.end())
        {
            cout<<"not found"<<endl;
        }
        else{
            cout<<"found";
        }
}