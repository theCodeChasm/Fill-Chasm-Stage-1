#pragma once
#include <iostream>
#include <fstream>
#include  "graph.h"
#include "stdafx.h"


class UndirectedGraph : public WeightedGraph
{
public:
	UndirectedGraph(int mVertices); // Call the base constructor with mVertices
									// but otherwise is empty.

	void set(int, int, int);        // Sets index i,j to weight AND index j,i to weight
									// First param: i
									// Second param: j
									// Third param: weight
	void set(int, int);             // Calls set(i, j, 1)

	int getSumEdgeWeights();        // Comutes the sum of the edge weights
									// for only the upper triangle and the diagonal.
									// This will require a fancy for-loop.
	UndirectedGraph prim();         // The big one. See below.
};
