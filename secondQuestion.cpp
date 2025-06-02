#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool hasCircularDependency(int n, vector<vector<int>>& edges) {
        vector<vector<int>> graph(n);
        for (const auto& edge : edges) {
            graph[edge[0]].push_back(edge[1]);
        }
        vector<int> state(n, 0);
        for (int i = 0; i < n; ++i) {
            if (state[i] == 0 && dfs(i, graph, state)) {
                return true;
            }
        }
        return false;
    }
private:
    bool dfs(int node, vector<vector<int>>& graph, vector<int>& state) {
        state[node] = 1;

        for (int neighbor : graph[node]) {
            if (state[neighbor] == 1) {
                return true;
            }
            if (state[neighbor] == 0 && dfs(neighbor, graph, state)) {
                return true;
            }
        }

        state[node] = 2;
        return false;
    }
};

int main() {
    int n, m;
    cout << "Enter number of modules (n): ";
    cin >> n;

    cout << "Enter number of dependencies (edges): ";
    cin >> m;

    vector<vector<int>> edges;
    cout << "Enter the dependencies (a b):\n";
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        edges.push_back({a, b});
    }

    Solution sol;
    bool hasCycle = sol.hasCircularDependency(n, edges);

    cout << (hasCycle ? "True (circular dependency exists)" : "False (no circular dependency)") << endl;

    return 0;
}

