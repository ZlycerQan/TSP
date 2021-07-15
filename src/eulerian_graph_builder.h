// eulerian_graph_builder.h

#ifndef TSP_EULERIAN_GRAPH_BUILDER_H
#define TSP_EULERIAN_GRAPH_BUILDER_H

#include "graph.h"

namespace tsp {

    class EulerianGraphBuilder {

    public:

        static EulerianGraph buildEulerianGraph(const Tree& tree);
    };

}
#endif //TSP_EULERIAN_GRAPH_BUILDER_H
