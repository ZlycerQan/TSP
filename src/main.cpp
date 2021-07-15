// main.cpp

#include <iostream>

#include "graph_builder.h"
#include "prim.h"
#include "eulerian_circuit_algorithm.h"
#include "short_path_algorithm.h"

int main() {

    std::cout << "Please input the number of cities" << '\n';
    size_t n;
    std::cin >> n;

    // Randomly generate a complete graph that satisfies the triangle inequality
    tsp::Graph graph(std::move(tsp::GraphBuilder::createCompleteGraph(n, n * 10)));
    tsp::displayGraph(graph);

    // Find the mst
    tsp::Tree tree(std::move(tsp::Prim::calculate(graph)));
    tsp::displayTree(tree);

    // Build the eulerian graph
    tsp::EulerianGraph eulerianGraph(std::move(tsp::EulerianGraphBuilder::buildEulerianGraph(tree)));
    tsp::displayEulerianGraph(eulerianGraph);

    // Find the eulerian circuit
    tsp::EulerianCircuit eulerianCircuit(std::move(tsp::EulerianCircuitAlgorithm::calcEulerianCircuit(eulerianGraph)));
    tsp::displayEulerianCircuit(eulerianCircuit);

    // Find the short path
    tsp::ShortPath answer(std::move(tsp::ShortPathAlgorithm::calcShortPath(eulerianCircuit)));
    tsp::displayShortPath(answer);

    system("pause");

    return 0;
}
