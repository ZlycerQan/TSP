// graph_builder.h

#ifndef TSP_GRAPH_BUILDER_H
#define TSP_GRAPH_BUILDER_H

#include <vector>
#include <random>
#include <chrono>
#include <functional>

#include "graph.h"

namespace tsp {

    class GraphBuilder {

    public:

        static Graph createCompleteGraph(size_t n, unsigned int lim);

    };

}

#endif //TSP_GRAPH_BUILDER_H
