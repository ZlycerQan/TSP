// graph.cpp

#include "graph.h"

namespace tsp {

    void displayGraph(const Graph& graph) {
        size_t n = graph.size();
        std::cout << "The graph has " << n << " points and " << n * (n - 1) << " edges." << '\n';
        for (size_t i = 0; i < n; ++ i) {
            for (size_t j = 0; j < n; ++ j) {
                std::cout << graph[i][j] << (j == n - 1 ? "\n" : " ");
            }
        }
    }

    void displayEdge(const Edge& edge) {
        std::cout << edge.first << "-" << edge.second << " ";
    }

    void displayTree(const Tree& tree) {
        std::cout << "The tree has " << tree.size() + 1 << " nodes and " << tree.size()  << " edges." << '\n';
        for (const Edge& edge : tree) {
            displayEdge(edge);
        }
        std::cout << '\n';
    }

    void displayEulerianCircuit(const EulerianCircuit& eulerianCircuit) {
        std::cout << "The eulerian path has " << eulerianCircuit.size() << " points." << '\n';
        for (size_t i = 0; i < eulerianCircuit.size(); ++ i) {
            std::cout << eulerianCircuit[i] << (i == eulerianCircuit.size() - 1 ? "\n" : "->");
        }
    }

    void displayEulerianGraph(const EulerianGraph& eulerianGraph) {
        std::cout << "The eulerian graph has " << eulerianGraph.size() << " points and " << eulerianGraph.size() * 2 << " edges." << '\n';
        for (size_t i = 0; i < eulerianGraph.size(); ++ i) {
            for (size_t j = 0; j < eulerianGraph[i].size(); ++ j) {
                std::cout << i << "->" << eulerianGraph[i][j] << " ";
            }
        }
        std::cout << '\n';
    }

    void displayShortPath(const ShortPath& shortPath) {
        std::cout << "The short path has " << shortPath.size() << " points." << '\n';
        for (size_t i = 0; i < shortPath.size(); ++ i) {
            std::cout << shortPath[i] << (i == shortPath.size() - 1 ? "\n" : "->");
        }
    }

}
