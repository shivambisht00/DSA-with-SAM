#include <iostream>
#include <vector>
using namespace std;

class solution {
public:
    bool issafe(vector<vector<char>>& board, int row, int col, char dig) {
        // Horizontal check 
        for (int i = 0; i < 9; i++) {
            if (board[row][i] == dig) {
                return false;
            }
        }
        // Vertical check
        for (int i = 0; i < 9; i++) {
            if (board[i][col] == dig) {
                return false;
            }
        }

        // 3x3 Grid check 
        int strow = (row / 3) * 3;
        int stcol = (col / 3) * 3;
        for (int i = strow; i <= strow + 2; i++) {
            for (int j = stcol; j <= stcol + 2; j++) { // Fixed 'i <= stcol+2' to 'j <= stcol+2'
                if (board[i][j] == dig) {
                    return false;
                }
            }
        }
        return true;
    }

    bool solver(vector<vector<char>>& board, int row, int col) {
        // Base case: if we reach row 9, the board is successfully solved
        if (row == 9) {
            return true;
        }

        // Calculate next row and column coordinates
        int nxtrow = row;
        int nxtcol = col + 1;
        if (nxtcol == 9) {
            nxtrow = row + 1;
            nxtcol = 0;
        }

        // If the current cell is already pre-filled, move directly to the next cell
        if (board[row][col] != '.') {
            return solver(board, nxtrow, nxtcol);
        }

        // Try digits from '1' to '9' (Fixed from '0' to '1')
        for (char dig = '1'; dig <= '9'; dig++) {
            if (issafe(board, row, col, dig)) {
                board[row][col] = dig;
                
                // Pass nxtrow and nxtcol instead of current row and col
                if (solver(board, nxtrow, nxtcol)) {
                    return true;
                }
                
                // Backtrack
                board[row][col] = '.';
            }
        }
        
        return false;
    }

    void solvesuduko(vector<vector<char>>& board) {
        solver(board, 0, 0);
    }
};

int main() {
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };
    
    solution obj;
    obj.solvesuduko(board);
    cout << "sudoku solved" << endl;
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
