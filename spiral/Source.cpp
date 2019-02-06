#include <vector>
using namespace std;
class Solution {
public:
	vector<int> spiralOrder(vector<vector<int>>& matrix) {
		int x = matrix.size();
		int y = matrix[0].size();
		vector<int> output;
		for (int i = 0; i < x; i++)
		{
			for (int j = 0; j < y; j++)
			{
				if (i % 2 == 0)
				{
					output.push_back(matrix[i][j]);
				}
				else
				{
					output.push_back(matrix[i][y -1 - j]);
				}
			}
		}
		return output;
	}
};

int main()
{
	Solution solution;
	vector< vector<int> > matrix;
	matrix.resize(4);  // resize top level vector
	for (int i = 0; i < 4; i++)
	{
		matrix[i].resize(4);  // resize each of the contained vectors
		for (int j = 0; j < 4; j++)
		{
			matrix[i][j] = i*j;
		}
	}

	vector<int> output = solution.spiralOrder(matrix);
}