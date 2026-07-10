#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

#include "graphFile.h"
void dfsHelper(unordered_map<int,vector<pair<int,int>>>&mp,unordered_map<int,bool>&vis
  ,vector<int>&ans,int source){
    vis[source]=true;
    for(auto i:mp[source]){
      if(!vis[i.first]){
      dfsHelper(mp,vis,ans,i.first);    
          
          
      }  
        
        
        
    }
     ans.push_back(source); 
      
  }
 vector<int> graph::topoSort(int V) {
    //  V->no.of node value from 1-n
       unordered_map<int,bool>vis;
       vector<int>ans;
       
      for(int i=0;i<V;i++) {if(!vis[i]){dfsHelper(m,vis,ans,i);}}
      reverse(ans.begin(),ans.end());
      return ans;
    }
vector<int> graph::topoSort_bsf(int V) {
    //  V->no.of node value from 1-n
    unordered_map<int,int>indeg;
    vector<int>ans;
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
    ans.push_back(front);
    
       for(auto i:m[front]){
          indeg[i.first]--;
          if(indeg[i.first]==0){
            
             indeg.erase(i.first);
              q.push(i.first);
          }
           
       }
           
           
           
       }
       return ans;
    }