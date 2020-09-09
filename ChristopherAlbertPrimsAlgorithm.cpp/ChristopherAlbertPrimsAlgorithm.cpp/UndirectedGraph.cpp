#include <iostream>
#include <fstream>
#include  "UndirectedGraph.h"
#include "stdafx.h"
#include "graph.h"


UndirectedGraph::UndirectedGraph(int Vertices) : WeightedGraph(Vertices) {

	
}
void UndirectedGraph::set(int, int, int) {
	checkForVertexInRange(start);
	checkForVertexInRange(destination);
	mGraph[start * mVertices + destination] = weight;
	}


	void UndirectedGraph::set(int start, int destination) {
		mGraph[start * mVertices + destination] = 1;
		// Calls set(i, j, 1)
	}
	int UndirectedGraph::getSumEdgeWeights() {
	
	// Comutes the sum of the edge weights
								// for only the upper triangle and the diagonal.
								// This will require a fancy for-loop.
	}
	UndirectedGraph UndirectedGraph:: prim() {
		
		
		{
			int parent[V]; // Array to store constructed MST
			int key[V];   // Key values used to pick minimum weight edge in cut
			bool mstSet[V];  // To represent set of vertices not yet included in MST

							 // Initialize all keys as INFINITE
			for (int i = 0; i < V; i++)
				key[i] = INT_MAX, mstSet[i] = false;

			// Always include first 1st vertex in MST.
			key[0] = 0;     // Make key 0 so that this vertex is picked as first vertex
			parent[0] = -1; // First node is always root of MST 

							// The MST will have V vertices
			for (int count = 0; count < V - 1; count++)
			{
				// Pick the minimum key vertex from the set of vertices
				// not yet included in MST
				int u = minKey(key, mstSet);

				// Add the picked vertex to the MST Set
				mstSet[u] = true;

				// Update key value and parent index of the adjacent vertices of
				// the picked vertex. Consider only those vertices which are not yet
				// included in MST
				for (int v = 0; v < V; v++)

					// graph[u][v] is non zero only for adjacent vertices of m
					// mstSet[v] is false for vertices not yet included in MST
					// Update the key only if graph[u][v] is smaller than key[v]
					if (graph[u][v] && mstSet[v] == false && graph[u][v] <  key[v])
						parent[v] = u, key[v] = graph[u][v];
			}
	
};