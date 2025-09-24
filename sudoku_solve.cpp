#include<iostream>
#include<vector>
using namespace std;


bool is_safe(vector<vector<char>> &board,int row ,int col,char dig){
    for(int i=0; i<9; i++){
        if(board[row][i] == dig){
            return false;
        }
    }
    for(int j=0; j<9; j++){
        if(board[j][col] == dig){
            return false;
        }
    }
    int st=(row/3)*3;
    int end=(col/3)*3;

    for(int i= st; i<=st+2;i++){
        for(int j=end; j<=end+2;j++){
            if(board[i][j]==dig){
                return false;
            }
        }
    }
    return true;
}
bool sudoku_solver(vector<vector<char>> &board,int row ,int col){

    if(row==9){
        return true;
    }
    
    int nextRow=row,nextCol=col+1;

    if (nextCol==9){
        nextRow+=1;
        nextCol=0;
    }
    if(board[row][col]!= '.'){
        return sudoku_solver(board,nextRow,nextCol);
    }

    for(char dig='1';dig<='9';dig++){
        if(is_safe(board,row,col,dig)){
            board[row][col] = dig;
            if(sudoku_solver(board,nextRow,nextCol)){
                return true;
            }
        }
         board[row][col] = '.';
    }
    return false;
}

void printBoard(vector<vector<char>> &board) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){

     vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    cout << "Sudoku Puzzle:" << endl;
    printBoard(board);

    if (sudoku_solver(board, 0, 0)) {
        cout << "\nSolved Sudoku:" << endl;
        printBoard(board);
    } else {
        cout << "No solution exists!" << endl;
    }

    return 0;
}