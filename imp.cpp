#include<iostream>

#include "graphFile.h"

using namespace std;


void graph::createEdge(int u,int v,bool directed,int wt){
// directed ==0->undirected graph
// directed ==1->directed graph
if(directed){
m[u].push_back({v,wt});
if(m.find(v)==m.end()){
    m[v];
}

}
else{
    m[u].push_back({v,wt});
    m[v].push_back({u,wt});
}


}
void graph:: print(){
for(auto i:m){
cout<<i.first<<" : {";
for(int j=0;j<i.second.size();j++){
cout<<"("<<i.second[j].first<<","<<i.second[j].second<<")";
if(j+1!=i.second.size()){
    cout<<",";
}

}


cout<<"}"<<endl;


}



}







