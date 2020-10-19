//Christopher Albert
//CSCI 3250
//14 April 2018
//Program that stores integer values as 1D Array
//Assignment07

#pragma once

#include <iostream>
#include "stdafx.h"
#include "graph.h"


WeightedGraph::WeightedGraph(int m)  {
	mVertices = m; 
	int maxSize = m*m;
		mGraph = new int[mVertices * mVertices];
		for (int i = 0; i < maxSize; i++)
			mGraph[i] = 0;
	
}
void WeightedGraph::set(int start, int destination) {
	mGraph[start * mVertices + destination] = 1;
}
int WeightedGraph::get(int start, int destination)const {
	return mGraph[start * mVertices + destination];
}
 WeightedGraph::WeightedGraph (const WeightedGraph& graph) {
	
	
	 for (int i = 0; i<mVertices; i++) {
		 for (int j = 0; j<mVertices; j++) {
			 mGraph[j*mVertices + i] = graph.mGraph[j*mVertices + i];
		 }
	 }
	 
}
 void WeightedGraph::printGraph() {
	 for (int i = 0; i < (mVertices * mVertices); i++) {
		 if (i % (mVertices) == 0)
			 std::cout << "\n";
		 std::cout << mGraph[i];
	 }
 }
 WeightedGraph WeightedGraph::operator=(const WeightedGraph& graph) {
	

		 for (int i = 0; i < (mVertices * mVertices); i++) {
			 mGraph[i] = graph.mGraph[i];
			 
		 }
		 return graph;
	 }
void WeightedGraph::transpose() {

	WeightedGraph t(mVertices);
	for (int i = 0; i < mVertices; i++)
		for (int j = 0; j < mVertices; j++)
			t.set(i, j, get(j, i));
	t.printGraph();
	
	
}
bool WeightedGraph::isSymmetric() const {
	bool yes = true;
	for (int i = 0; i < mVertices; i++) {
		for (int j = 0; j < mVertices; j++) {
			if (get(i, j) != get(j, i))
			{
				yes = false;
				std::cout << "\nSymmetric? No";
				return yes;
			}



		}
	}
	if (yes = true) {
		std::cout << "\nSymmetric? Yes";
		return yes;
	}
			else
				return yes;
}
	bool WeightedGraph::isAntisymmetric() const{
		bool yes = true;

		for (int i = 0; i < mVertices; i++) {
			for (int j = 1; j < mVertices; j++) {
				if ((get(i, j) == 1) && (get(j, i) == 1))
				{
					yes = false;
					std::cout << "\nAnti-symmetric? No";
					return yes;
				}
			}
		}
	
		if (yes = true) {
			std::cout << "\nAnti-symmetric? Yes";
			return yes;
		}
	else
		
	return yes;
}
bool WeightedGraph::isReflexive() const {
	bool yes = true;
	for (int i = 0; i < mVertices; i++)

	{
		if (get(i, i) != 1)
		{
			yes = false;
			std::cout << "\nReflexive? No";
			return yes;
		}
	}
	if (yes = true) {
		std::cout << "\nReflexive? Yes";
		return yes;
	}
	else
		
	return yes;

	
}

void WeightedGraph::checkForVertexInRange(int x)const {
	if (x < 0 || x >(mVertices * mVertices))
		throw ("Vertex is out of Range");
}
				
void WeightedGraph::set(int start, int destination, int weight) {
	checkForVertexInRange(start);
	checkForVertexInRange(destination);
	mGraph[start * mVertices + destination] = weight;
}

int WeightedGraph::GetNumVertices()const {
	return mVertices;
}
