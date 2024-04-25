#include "Graph.h"


void Graph::DeleteCity(string city)
{
	adjList.erase(city); //removing city from the adjacency list

	//removing all its edges
	for (auto& it : adjList) //iterating over adjList
	{
		auto edges = it.second; //vector of the edges

		vector<pair<string, float>> newEdges; //vector for storing edges after removal

		for (int i = 0; i < edges.size(); i++) //iterating over the vector
		{
			if (edges.at(i).first != city) 
			{
				newEdges.push_back(edges.at(i));
			}
		}

		edges = newEdges; //replacing old edges vector with the new one
	}
}
