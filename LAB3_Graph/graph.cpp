#include <vector>
#include <iostream>
#include "graph.h"
#include "Header.h"
using namespace std;

void Graph::Build_Matrix_Adj() {
	for (int i = 0; i <this-> amount; i++) {
		cout << "Fill in the vertixe that is connected with " << i + 1 << " vertixe" << endl;
		cout << "Enter numbers from 1 to " << this->amount << " If you want a vertixe doesn't connect press 0, else press 1" << endl;
		for (int k = 0; k < this->amount; k++)
			cout << k + 1 << " ";
		cout << "\n";
		int second;
		for (int j = 0; j < this->amount; j++) {
			cout << j + 1 << ") ";
			second = get_flow(second, cin);
			//cin >> second; //check
			if (second != 0 && second != 1)
				second = 1;
			matrix[i][j] = second;
		}
	}

	cout << "Adjacency  matrix:" << endl;
	for (int i = 0; i < amount; i++) {
		for (int j = 0; j < amount; j++)
			cout << matrix[i][j] << " ";
		cout << "\n";
	}

}
