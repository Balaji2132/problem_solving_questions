//// C++ program to demonstrate Adjacency Matrix
// representation of undirected and unweighted graph

#include<iostream>
#include<vector>
using namespace std;

void addEdge(vector<vector<int>> &mat, int i, int j)
{
    mat[i][j] = 1;
    mat[j][i] = 1;
}

void displayMatrix(vector<vector<int>> &mat)
{
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() 
{
    int V = 4; // Number of vertices in the graph
    vector<vector<int>> mat(V, vector<int>(V, 0)); // Initialize adjacency matrix with 0s
    addEdge(mat, 0, 1); // Add edge between vertex 0 and 1
    addEdge(mat, 0, 2); // Add edge between vertex 0 and 2
    addEdge(mat, 1, 2); // Add edge between vertex 1 and 2
    addEdge(mat, 2, 3); // Add edge between vertex 2 and 3
    cout << "Adjacency Matrix:" << endl;
    displayMatrix(mat); // Display the adjacency matrix
    return 0;
}