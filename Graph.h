#pragma once
#include <string>
#include <unordered_map>
using namespace std;

class Graph
{

	unordered_map<string, vector<string>> adjList;

public:

	Graph() {} //constructor

	//change return type and parameters according to what u need
	void AddCity();
	void DeleteCity();
	void FindShortestDis();
	void UpdateGraph();


};
