#include "pch.h"
#include "TP_1.h"
#include <map>

std::vector<int>* array_counting(const std::vector<int> *input_data) {
	std::map<int, int> counted;
	std::map<int, int>::iterator it;
	for (auto x:*input_data) {
		auto iter_for_find = counted.find(x);
		if (iter_for_find == counted.end())
			counted[x] = 1;
		else 
			++iter_for_find->second;
	}
		
	int max = counted.begin()->second;
	for (it = counted.begin(); it != counted.end(); it++)
		if (it->second > max)
			max = it->second;
	std::vector<int> *maxez = new std::vector<int>();
	for (it = counted.begin(); it != counted.end(); it++)
		if (it->second == max)
			maxez->push_back(it->first);
	return maxez;
}