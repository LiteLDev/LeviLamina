#pragma once
#include <vector>
#include <string>

std::wstring str2wstr(std::string str);
std::string wstr2str(std::wstring wstr);
std::vector<std::string> SplitStrWithPattern(const std::string& str, const std::string& pattern);