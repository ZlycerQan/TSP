// prim.cpp

#include "prim.h"

namespace tsp {

    Tree Prim::calculate(const Graph& graph) {
        size_t n = graph.size();
        size_t s = 0;
        std::vector<uint32_t> dis(n);
        for (size_t i = 0; i < n; ++ i) {
            dis[i] = graph[s][i];
        }
        std::vector<bool> vis(n);
        dis[s] = 0;
        vis[s] = true;
        std::vector<Edge> res;
        std::vector<size_t> last(n);
        for (size_t i = 0; i < n - 1; ++ i) {
            size_t k = 0;
            uint32_t mn = INT_MAX;
            for (size_t j = 0; j < n; ++ j) {
                if (!vis[j] && dis[j] < mn) {
                    k = j;
                    mn = dis[k];
                }
            }
            res.emplace_back(std::make_pair(last[k], k));
            vis[k] = true;
            for (size_t j = 0; j < n; ++ j) {
                if (dis[j] > graph[k][j]) {
                    dis[j] = graph[k][j];
                    last[j] = k;
                }
            }
        }
        return res;
    }

}
