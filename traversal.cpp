#include<iostream>
#include <queue>

#include "graphFile.h"

using namespace std;
void fun(int source,unordered_map<int,bool>&mp,unordered_map<int,vector<pair<int,int>>>&m){

 cout<<source<<" ";
 mp[source]=true;
for(auto i:m[source]){
    if(!mp[i.first]){
fun(i.first,mp,m);

    }



}




}
void graph ::dfs(int source){
unordered_map<int,bool>mp;
fun(source,mp,m);




}
void graph ::bfs(int source){
  queue<int>q;
  unordered_map<int,bool>mp;
  q.push(source);
  mp[source] = true;
  while(!q.empty()){

int size=q.size();


for(int i=0;i<size;i++){
    auto front=q.front();
    q.pop();
cout<<front<<" ";
    for(auto i:m[front]){
if(!mp[i.first]){
q.push(i.first);
mp[i.first]=true;
}
   
}
}
cout<<endl;

  } 
    



}