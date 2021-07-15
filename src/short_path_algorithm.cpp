// short_path_algorithm.cpp

#include "short_path_algorithm.h"

namespace tsp {

    ShortPath ShortPathAlgorithm::calcShortPath(const EulerianCircuit& eulerianCircuit) {
        size_t n = eulerianCircuit.size();
        std::vector<bool> vis(n);
        ShortPath result;
        for (const size_t& i : eulerianCircuit) {
            if (!vis[i]) {
                result.push_back(i);
                vis[i] = true;
            }
        }
        return result;
    }

}
