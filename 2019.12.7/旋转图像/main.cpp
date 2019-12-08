#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<vector<int>>& matrix) {
         int rownum = matrix.size();
        int colnum = matrix[0].size();

        // 将矩阵转置
        for (int i=0; i<rownum; i++)
        { 
            for (int j=0; j<i; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // 每一行对称翻转
        for (int i=0; i<rownum; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
}
int main()
{
	vector<vector<int>> matrix =
	{
		{5, 1, 9,11},
		{2, 4, 8,10},
		{13, 3, 6, 7},
		{15,14,12,16}
	};



    return 0;
}
