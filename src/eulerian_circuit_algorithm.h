// eulerian_circuit_algorithm.h

#ifndef TSP_EULERIAN_CIRCUIT_ALGORITHM_H
#define TSP_EULERIAN_CIRCUIT_ALGORITHM_H

#include "graph.h"
#include "eulerian_graph_builder.h"

namespace tsp {

    class EulerianCircuitAlgorithm {

    private:

        static void dfs(size_t u, EulerianGraph& g, EulerianCircuit& res);

    public:

        static EulerianCircuit calcEulerianCircuit(const EulerianGraph& eulerianGraph);

    };

}

#endif //TSP_EULERIAN_CIRCUIT_ALGORITHM_H
