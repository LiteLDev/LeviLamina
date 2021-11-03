#pragma once
#include <fstream>
#include <optional>
#include <string>

FILE* GetFILEfromFstream(std::fstream& fs);
std::optional<std::string> ReadAllFile(const std::string& filePath, bool isBinary = false);