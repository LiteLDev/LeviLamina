#pragma once
#include "../Global.h"
#include <fstream>
#include <optional>
#include <string>

LIAPI FILE* GetFILEfromFstream(std::fstream& fs);
LIAPI std::optional<std::string> ReadAllFile(const std::string& filePath, bool isBinary = false);