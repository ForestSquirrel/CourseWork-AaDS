#include <iostream>
#include<fstream>
#include "Map.h"
#include"NetworkFlow.h"
using namespace std;


int main() {
	try {
		ifstream input("C:\\Users\\Squirrel\\source\\repos\\Ford_Fulkerson\\input.txt");
		NetworkFlow* flow = new NetworkFlow(input);

		// Выводим максимальный поток
		int max = flow->max_flow();

		input.close();
		delete flow;
		cout << "Max flow is " << max << endl;
	}
	catch (exception& ex) {
		cout << ex.what();
	}
	return 0;
}