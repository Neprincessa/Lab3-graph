#ifndef _GRAF__G
#define _GRAF__G

#include <vector>
#include <iostream>
using namespace std;

struct Edge
{
	int beginPoint;
	int endPoint;
	int weight;
};

const int len = 1000;
class Graph {
	int amount;
	vector<vector<int>> matrix;
	//vector<int> *matrix;
public : 
	Graph(int amountNodes) {
		amount = amountNodes;
		matrix.push_back(vector<int>());
		//matrix.reserve(amount);
		/*for (int i = 0; i < amount; i++)
			matrix[i].reserve(amount);
		*/
		for (int i = 0; i<amount; i++)
		{
			vector<int>v;
			matrix.push_back(v);
		}
		for (int i = 0; i < amount; i++)
			for (int j = 0; j < amount; j++)
				matrix[i].push_back(0);
	}

	void Build_Matrix_Adj();
	vector<vector<int>> Get_Matrix_Sm();
};
#endif // !_GRAF__G
