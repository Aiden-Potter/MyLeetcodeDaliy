#include <iostream>
#include<vector>
using namespace std;
bool isValidSudoku(vector<vector<char>>& board) {
          int row[9][9]={0},col[9][9]={0},Matrix[9][9]={0};
           for(int i=0;i<9;i++){
               for(int j=0;j<9;j++){
                  if(board[i][j]!='.'){
                     int num=board[i][j]-'0'-1;
                     row[i][num]++;
                      col[j][num]++;
                      Matrix[3*(i/3)+j/3][num]++;
                      if(row[i][num]==2||col[j][num]==2||Matrix[3*(i/3)+j/3][num]==2)return false;
                 }
            }
        }
        return true;
    }
int main()
{
	vector<vector<char>> shudu=
	{{'5','3','.','.','7','.','.','.','.'},
	{'6','.','.','1','9','5','.','.','.'},
	{'.','9','8','.','.','.','.','6','.'},
	{'8','.','.','.','6','.','.','.','3'},
	{'4','.','.','8','.','3','.','.','1'},
	{'7','.','.','.','2','.','.','.','6'},
	{'.','6','.','.','.','.','2','8','.'},
	{'.','.','.','4','1','9','.','.','5'},
	{'.','.','.','.','8','.','.','7','9'}};

    cout <<isValidSudoku(shudu)<< endl;
    return 0;
}
