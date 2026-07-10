# Graph Algorithms in C++

A modular C++ implementation of fundamental graph algorithms using an adjacency list representation. Each algorithm is implemented in a separate source file to keep the project organized, reusable, and easy to understand.

---

## 📂 Project Structure


GRAPH/
│
├── graphFile.h      # Graph class declarations
├── traversal.cpp    # BFS & DFS implementations
├── topoSort.cpp     # Topological Sorting algorithms
├── cycDet.cpp       # Cycle Detection algorithms
├── imp.cpp          # Graph utilities and helper functions
├── main.cpp         # Driver program demonstrating all algorithms
└── README.md




## ✨ Features

- Graph representation using Adjacency List
- Weighted and Unweighted Graphs
- Directed and Undirected Graphs
- Breadth First Search (BFS)
- Depth First Search (DFS)
- Cycle Detection in Undirected Graph
- Cycle Detection in Directed Graph
- Topological Sorting using DFS
- Topological Sorting using Kahn's Algorithm (BFS)

---

## 🛠️ Technologies

- C++
- STL (Vector, Queue, Stack, Unordered Map)
- GCC / G++

---

## ⚙️ Requirements

- C++17 or later
- GCC Compiler

---

## 🚀 Compile

Compile the entire project using:

```bash
g++ main.cpp traversal.cpp topoSort.cpp cycDet.cpp imp.cpp -o graph
```

---

## 🔨 Generate Object Files

Compile each source file separately.

```bash
g++ -c traversal.cpp
g++ -c topoSort.cpp
g++ -c cycDet.cpp
g++ -c imp.cpp
g++ -c main.cpp
```

Generated object files:

```text
traversal.o
topoSort.o
cycDet.o
imp.o
main.o
```

---

## 🔗 Link Object Files

```bash
g++ traversal.o topoSort.o cycDet.o imp.o main.o -o graph
```

---

## ▶️ Run

### Linux / macOS

```bash
./graph
```

### Windows

```bash
graph.exe
```

or

```bash
.\graph.exe
```

---

## 💻 Example Usage

```cpp
#include "graphFile.h"

int main() {

    graph g;

    // Create Edges
    g.createEdge(0, 1, false, 1);
    g.createEdge(0, 2, false, 1);
    g.createEdge(1, 3, false, 1);
    g.createEdge(2, 4, false, 1);

    // Print Graph
    g.print();

    // Traversals
    g.bfs(0);
    g.dfs(0);

    // Cycle Detection
    g.uncycDet_bfs(0);
    g.uncycDet_dfs(0);
    g.DrcycDet_dfs(0);
    g.DrcycDet_Bsf(5);

    // Topological Sorting
    g.topoSort(5);
    g.topoSort_bsf(5);

    return 0;
}
```

---

## 📚 API Reference

| Function | Description |
|----------|-------------|
| `createEdge(u, v, directed, wt)` | Adds an edge to the graph. |
| `print()` | Prints the adjacency list representation. |
| `bfs(source)` | Performs Breadth First Search. |
| `dfs(source)` | Performs Depth First Search. |
| `uncycDet_bfs(source)` | Detects a cycle in an undirected graph using BFS. |
| `uncycDet_dfs(source)` | Detects a cycle in an undirected graph using DFS. |
| `DrcycDet_dfs(source)` | Detects a cycle in a directed graph using DFS. |
| `DrcycDet_Bsf(V)` | Detects a cycle in a directed graph using Kahn's Algorithm. |
| `topoSort(V)` | Performs Topological Sort using DFS. |
| `topoSort_bsf(V)` | Performs Topological Sort using Kahn's Algorithm. |

---

## 📖 Concepts Covered

- Graph Representation
- Adjacency List
- Graph Traversal
- Breadth First Search (BFS)
- Depth First Search (DFS)
- Cycle Detection
- Directed Graphs
- Undirected Graphs
- Topological Sorting
- Kahn's Algorithm
- Modular C++ Programming

---

## 🚀 Future Improvements

- Dijkstra's Algorithm
- Bellman-Ford Algorithm
- Floyd-Warshall Algorithm
- Prim's Algorithm
- Kruskal's Algorithm
- Disjoint Set Union (DSU)
- Strongly Connected Components (Kosaraju & Tarjan)
- Shortest Path Algorithms
- Minimum Spanning Tree Algorithms

---

## 👨‍💻 Author

**Raghav Singhal**

If you found this repository useful, consider giving it a ⭐ on GitHub.
