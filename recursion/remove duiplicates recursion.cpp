#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;

    vector<pair<int , string>> c;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        string b;
        getline(cin,b);
        c.push_back(make_pair(a,b));
    }
    for(int i=0;i<n;i++){
    cout<<c[i].first<<" ";

    cout<<c[i].second<<endl;
    }

    return 0;
}

