// graph.h

#ifndef TSP_GRAPH_H
#define TSP_GRAPH_H

#include <vector>
#include <iostream>

namespace tsp {

    using Graph = std::vector<std::vector<uint32_t>>;
    using Edge = std::pair<size_t, size_t>;
    using EulerianGraph = std::vector<std::vector<size_t>>;
    using EulerianCircuit = std::vector<size_t>;
    using ShortPath = std::vector<size_t>;
    using Tree = std::vector<std::pair<size_t, size_t>>;

    void displayGraph(const Graph& graph);
    void displayEdge(const Edge& edge);
    void displayTree(const Tree& tree);
    void displayEulerianGraph(const EulerianGraph& eulerianGraph);
    void displayEulerianCircuit(const EulerianCircuit& eulerianCircuit);
    void displayShortPath(const ShortPath& shortPath);

}
#endif //TSP_GRAPH_H
