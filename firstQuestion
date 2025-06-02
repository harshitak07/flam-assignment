#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> results;
        vector<string> board(n, string(n, '.'));
        vector<bool> columns(n, false);
        vector<bool> diag1(2 * n - 1, false);
        vector<bool> diag2(2 * n - 1, false);
        backtrack(0, n, board, columns, diag1, diag2, results);
        return results;
    }

private:
    void backtrack(int row, int n, vector<string>& board,
                   vector<bool>& columns, vector<bool>& diag1, vector<bool>& diag2,
                   vector<vector<string>>& results) {
        if (row == n) {
            results.push_back(board);
            return;
        }

        for (int col = 0; col < n; ++col) {
            int d1 = row - col + n - 1;
            int d2 = row + col;
            if (columns[col] || diag1[d1] || diag2[d2]) continue;

            board[row][col] = 'Q';
            columns[col] = diag1[d1] = diag2[d2] = true;

            backtrack(row + 1, n, board, columns, diag1, diag2, results);

            board[row][col] = '.';
            columns[col] = diag1[d1] = diag2[d2] = false;
        }
    }
};

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    Solution solver;
    vector<vector<string>> solutions = solver.solveNQueens(n);

    for (const auto& solution : solutions) {
        for (const auto& row : solution) {
            cout << row << endl;
        }
        cout << "----" << endl;
    }
    cout<<"Total solutions: "<<solutions.size()<<endl;

    return 0;
}
