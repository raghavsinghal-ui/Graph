#ifndef G_FILE_H
#define G_FILE_H
#include<vector>
#include<unordered_map>
#include<iostream>
using namespace std;
class graph{
public:
unordered_map<int,vector<pair<int,int>>>m;
void createEdge(int u,int v,bool directed,int wt);
void print();
void dfs(int source);
void bfs(int source);
bool uncycDet_bfs(bool directed,int source);
bool uncycDet_dfs(int source);
bool DrcycDet_dfs(int source);
bool graph::DrcycDet_Bsf(int V);
vector<int>  topoSort(int V) ;
vector<int> topoSort_bsf(int V);

};


#endif