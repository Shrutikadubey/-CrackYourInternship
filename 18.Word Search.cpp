//problem :Given an m x n grid of characters board and a string word, return true if word exists in the grid.
//The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.
//approach:This solution uses a depth-first search (DFS) approach to traverse the grid and find the word. The exist function iterates over each cell in the grid and calls the dfs function if the cell matches the first character of the word. The dfs function then recursively searches for the remaining characters in the word, exploring adjacent cells in all four directions (up, down, left, and right). If the word is found, the function returns true; otherwise, it returns false.
//solution:
int m = board.size();
        int n = board[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == word[0]) {
                    if (dfs(board, word, i, j, 0, visited)) {
                        return true;
                    }
                }
            }
        }
        return false;
    }

    bool dfs(vector<vector<char>>& board, string word, int i, int j, int k, vector<vector<bool>>& visited) {
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || visited[i][j] || board[i][j] != word[k]) {
            return false;
        }

        if (k == word.size() - 1) {
            return true;
        }

        visited[i][j] = true;

        if (dfs(board, word, i + 1, j, k + 1, visited) ||
            dfs(board, word, i - 1, j, k + 1, visited) ||
            dfs(board, word, i, j + 1, k + 1, visited) ||
            dfs(board, word, i, j - 1, k + 1, visited)) {
            return true;
        }

        visited[i][j] = false;
        return false;
