// short_path_algorithm.h

#ifndef TSP_SHORT_PATH_ALGORITHM_H
#define TSP_SHORT_PATH_ALGORITHM_H

#include "graph.h"

namespace tsp {

    class ShortPathAlgorithm {

    public:

        static ShortPath calcShortPath(const EulerianCircuit& eulerianCircuit);

    };

}

#endif //TSP_SHORT_PATH_ALGORITHM_H
