//Adjacency list representation of a unweighted and undirected graph.

#include<iostream>
#include<vector>
using namespace std;

//Function to add an edge to the graph
void addEdge(vector<vector<int>>& adj, int i, int j)
{
    adj[j].push_back(i); // Add j to i's list.
    adj[i].push_back(j); // Add i to j's list.
}

//Function to print the adjacency list
void displayAdjList(const vector<vector<int>>& adj)
{
    for (int i = 0; i < adj.size(); i++)
    {
        cout << i << " -> ";
        for (int j : adj[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() 
{
    int V = 4;
    vector<vector<int>> adj(V); // Create a graph with 4 vertices (0 to 4)
    addEdge(adj, 0, 1); // Add edge between 0 and 1
    addEdge(adj, 0, 2); // Add edge between 0 and 2
    addEdge(adj, 1, 2); // Add edge between 1 and 2
    addEdge(adj, 2, 3); // Add edge between 1 and 3
    cout << "Adjacency List:" << endl;
    displayAdjList(adj); // Display the adjacency list
    return 0;
}