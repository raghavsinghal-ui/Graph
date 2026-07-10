#include<iostream>
#include<queue>

#include "graphFile.h"

using namespace std;
bool graph::uncycDet_bfs(bool directed=false,int source){
    queue<int>q;
    unordered_map<int,int>vis;

q.push(source);
vis[source]=-1;
while(!q.empty()){
int front=q.front();
q.pop();

for(auto i:m[front]){
int node=i.first;

if(vis.find(node)!=vis.end())
{
if(!directed&&vis[front]==node
){
continue;
}
return true;

}
else{
    vis[node]=front;
    q.push(node);
}


}



}



return false;}
bool helper(int source,int parent,unordered_map<int,int>&vis,unordered_map<int,vector<pair<int,int>>>&m){
vis[source]=parent;

for(auto i:m[source])
{
if(vis.find(i.first)==vis.end()){
    if (helper(i.first,source,vis,m)){return true;}
}

else{
if(i.first==parent){
    continue;
}
return true;
}


}

return false;
}
bool graph::uncycDet_dfs(int source){
unordered_map<int,int>vis;
helper(source,-1,vis,m);


}
bool helper1(int source,unordered_map<int,int>&path,unordered_map<int,vector<pair<int,int>>>&m,unordered_map<int,int>&vis){

vis[source]=true;
path[source]=true;
for(auto i:m[source])
{
 int nbr = i.first;

        if(!vis[nbr])
        {
            if(helper1(nbr, path, m, vis))
                return true;
        }
        else if(path[nbr])
        {
            return true;
        }
}
path[source]=false;
return false;
}
bool graph::DrcycDet_dfs(int source){
unordered_map<int,int>path;
unordered_map<int,int>vis;
helper1(source,path,m,vis);


}
bool graph::DrcycDet_Bsf(int V){

         unordered_map<int,int>indeg;
         for(auto i:m){
for(auto j:i.second){
indeg[j.first]++;

}



         }
   queue<int>q;
      for(int i=0;i<V;i++){
       if(indeg.find(i)==indeg.end()){
        q.push(i);   
       }   
          
          
          
      }
     
      
      while(!q.empty()){
    int  front=q.front();
    q.pop();
    
       for(auto i:m[front]){
          indeg[i.first]--;
          if(indeg[i.first]==0){
             indeg.erase(i.first);
              q.push(i.first);
          }
           
       }
           
           
           
       }
       
          
      
     return !indeg.empty(); 

}