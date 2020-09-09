//Christopher Albert
//CSCI 3250
//14 April 2018
//Program that stores integer values as 1D Array
//Assignment07
#pragma once

#include <stdexcept>
#include <fstream>
#include <iostream>

class WeightedGraph
{
private:
	
	int mVertices;                           // Number of vertices
	int* mGraph;							 // 2D array of integers or a 1D array of integer.
											 // (Either way, this has mVertices * mVertices.)
											 // My preference is for a 1D array.
	void checkForVertexInRange(int) const;   // Checks for a vertex in range

public:
	WeightedGraph(int);   
											 // Builds a blank matrix that is m * m
											 // Set mVertices = m
											 // Sets all elements of mGraph to 0.
	

	WeightedGraph(const WeightedGraph&);     // Copy Constructor


	WeightedGraph operator=(const WeightedGraph&);
	// Sets passed graph equal to this graph.
	// 1. Deletes internal mGraph array
	// 2. Copies passed graph to this graph


	

	void printGraph();
	int GetNumVertices() const;              // Returns mVertices

	void set(int, int, int);                 // Sets index i,j to weight
											 // First param: i
											 // Second param: j
											 // Third param: weight
											 // Check to make sure that i and j are a vertex in range

	void set(int, int);                      // Calls "set(i,j,weight)" with weight=1
	int get(int, int) const;                 // Returns mGraph at cell (i,j)
											 // Check to make sure that i and j are a vertex in range

											 // This method can be written with for-loops (or without if you are clever).
	bool isSymmetric() const;                // Returns true if every elements at (i,j) is identical to (j,i)
	bool isAntisymmetric() const;            // Returns true if element at (i,j) is 1 and element (j,i)
											 // is 0 (provided that i != j)

											 // Each of these methods require a for loop
	void transpose();         // Builds a new matrix which is transpose of this matrix
	bool isReflexive() const;                // Returns true if all elements along the diagonal are > 0
	
};
