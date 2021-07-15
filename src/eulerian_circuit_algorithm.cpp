// eulerian_circuit_algorithm.cpp

#include "eulerian_circuit_algorithm.h"

namespace tsp {

    EulerianCircuit EulerianCircuitAlgorithm::calcEulerianCircuit(const EulerianGraph& eulerianGraph) {
        std::vector<size_t> res;
        EulerianGraph g(eulerianGraph);
        dfs(0, g, res);
        return res;
    }

    void EulerianCircuitAlgorithm::dfs(size_t u, EulerianGraph& g, EulerianCircuit& res) {
        for (size_t i = 0; i < g[u].size(); ++ i) {
            if (size_t v = g[u][i]; v != g.size()) {
                g[u][i] = g.size();
                dfs(v, g, res);
            }
        }
        res.push_back(u);
    }

}
