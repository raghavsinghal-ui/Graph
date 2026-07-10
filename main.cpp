#include<iostream>
#include"graphFile.h"
using namespace std;
int main()
{
    graph g;
    g.createEdge(0,1,0,0);
      g.createEdge(1,6,0,0);
      g.createEdge(1,4,0,0);
        g.createEdge(6,3,0,0);
          g.createEdge(3,4,0,0);
            g.createEdge(4,2,0,0);
             g.createEdge(2,5,0,0);
            g.print();
            // g.bfs(1);
            //  g.dfs(1);
            cout<<g.uncycDet_bfs(0,0);

    return 0;
} // namespace std;
