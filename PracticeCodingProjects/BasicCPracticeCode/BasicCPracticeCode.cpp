// BasicCPracticeCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;


typedef struct node
{
	string name;
	node *next;
};

int _tmain(void)
{
	string contestants[] = {"Seattle Sounders", "LA Galaxy", "Real Salt Lake", "FC Dallas", "Vancouver Whitecaps",
	"Portland Timbers", "Chivas USA", "Colorado Rapids", "San Jose Earthquakes", "DC United", "New England Revolution", 
	"Columbus Crew", "New York Red Bulls", "Sporting Kansas City", "Philadelphia Union", "Toronto FC",
	"Houston Dynamo", "Chicago Fire", "Montreal Impact"};

	cout << contestants[0];

	node *head = NULL; //empty linked list

	node *temp;
	temp = (node*)malloc(sizeof(node));
	temp->name == contestants[0];

	unsigned len = contestants->length();
	cout << len;

	for each (std::string contestant in contestants)
	{
		cout << contestant << std::endl;
	}

	return 0;
}

