// A simple representation of graph using STL 
//#include<bits/stdc++.h> 
#include <vector>
#include <iostream>
#include <cstdlib>
#include "graph.h"
#include "Header.h"
using namespace std;

const int V = 5; //maximum amount 

////----------------------------CheckData------------------------//
//template <class NUMBER, class STREAM>
//int get_flow(NUMBER &num, STREAM &flow) {
//	flow >> num;
//	while (!flow.good())
//	{
//		cout << "repeat: ";
//		flow.clear();
//		flow.ignore(numeric_limits <streamsize>::max(), '\n');
//		flow >> num;
//	}
//	return num;
//}
////----------------------------CheckData------------------------//


// A utility function to add an edge in an 
// undirected graph. 
void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

// A utility function to print the adjacency list 
// representation of graph 
void printGraph(vector<int> adj[], int V)
{
	for (int v = 0; v < V; ++v)
	{
		cout << "\n Adjacency list of vertex "
			<< v << "\n head ";
		for (auto x : adj[v])
			cout << "-> " << x;
		printf("\n");
	}
}

struct relatationsEdge {
	int from;
	int to;
};
// Driver code 
int main()
{
	//func for making matrix adj
	//func for put results in func addEdge

	//cout << "Set amount of edges" << endl;
	//int amountEdge;
	//amountEdge = get_flow(amountEdge, cin);
	//for (int i = 0; i < amountEdge; i++) {
	//	cout << i + 1 << ") " << endl;

	//}

	//making matrix
	//vector<vector<int>> matrix(V); //матрица смежности
	//for (int i = 0; i < V; i++)
	//	for(int j = 0; j < V; j++)
	//		matrix[i].push_back(0);
	//
	//for (int i = 0; i < V; i++) {
	//	cout << "Fill in the vertixe that is connected with " << i + 1 << " vertixe" << endl;
	//	cout << "Enter numbers from 1 to " << V <<" If you want a vertixe doesn't connect press 0, else press 1"<<endl;
	//	for (int k = 0; k < V; k++)
	//		cout << k + 1 << " ";
	//	cout << "\n";
	//	int second;
	//	for (int j = 0; j < V; j++) {
	//		cout << j + 1 << ") ";
	//		second = get_flow(second, cin);
	//		if (second != 0 && second != 1)
	//			second = 1; 
	//		matrix[i][j] = second;
	//	}
	//}

	//cout << "Adjacency  matrix:" << endl;
	//for (int i = 0; i < V; i++) {
	//	for (int j = 0; j < V; j++)
	//		cout << matrix[i][j] << " ";
	//	cout << "\n";
	//}
	//	

	vector<int> adj[V];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);


	printGraph(adj, V);

	cout << "AAAA" << endl;
	Graph myGraph(6);
	myGraph.Build_Matrix_Adj();
	system("pause");
	return 0;
}