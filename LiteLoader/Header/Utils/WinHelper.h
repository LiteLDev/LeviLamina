#pragma once
#include <string>
#include <fstream>

std::string GetLastErrorMessage();
FILE* GetFILEfromFstream(std::fstream& fs);