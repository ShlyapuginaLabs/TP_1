#pragma once
#include <vector>

#ifdef TP_1_EXPORTS
#define TP_1_API __declspec(dllexport)
#else
#define TP_1_API __declspec(dllimport)
#endif

extern "C" TP_1_API std::vector<int>* array_counting(const std::vector<int> *input_data);
