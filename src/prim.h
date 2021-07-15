// prim.h

#ifndef TSP_PRIM_H
#define TSP_PRIM_H

#include "graph.h"

namespace tsp {

    class Prim {

    public:

        static Tree calculate(const Graph& graph);

    };

}

#endif //TSP_PRIM_H
