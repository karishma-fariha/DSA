#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<iip>>graph(3,vector<iip>());
    graph[0].push_back({1,4});
    graph[0].push_back({2,1});
    graph[1].push_back({0,4});
    graph[1].push_back({2,3});
    graph[2].push_back({0,1});
    graph[2].push_back({1,3});
    cout<<primMST(graph)<<endl;
return 0;
}
