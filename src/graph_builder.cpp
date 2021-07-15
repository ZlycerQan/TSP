// graph_builder.cpp

#include "graph_builder.h"

namespace tsp {

    Graph GraphBuilder::createCompleteGraph(size_t n, uint32_t lim) {

        std::mt19937 rng((uint32_t) std::chrono::steady_clock::now().time_since_epoch().count());
        std::uniform_int_distribution<std::mt19937::result_type> dist(1, UINT32_MAX);

        std::function<uint32_t(uint32_t, uint32_t)> get = [&dist, &rng](uint32_t l, uint32_t r) {
            return dist(rng) % (r - l + 1) + l;
        };

        Graph dis(n, std::vector<uint32_t>(n));
        uint32_t sqrtLim = (uintptr_t) sqrt(lim);
        for (size_t i = 0; i < n; ++ i) {
            for (size_t j = i + 1; j < n; ++ j) {
                dis[i][j] = dis[j][i] = get(1, sqrtLim) + lim;
            }
        }
        return dis;
    }

}
