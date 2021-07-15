// eulerian_graph_builder.cpp

#include "eulerian_graph_builder.h"

namespace tsp {

    EulerianGraph EulerianGraphBuilder::buildEulerianGraph(const Tree& tree) {
        size_t n = tree.size() + 1;
        EulerianGraph g(n);
        for (const auto& [u, v] : tree) {
            g[u].push_back(v);
            g[v].push_back(u);
        }
        return g;
    }

}
