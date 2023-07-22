#pragma once
#include <fstream>
#include <optional>
#include <string>
#include "liteloader/api/Global.h"
#include "liteloader/api/LoggerAPI.h"

LLAPI FILE* GetFILEfromFstream(std::fstream& fs);
LLAPI HANDLE GetHANDLEfromFstream(std::fstream& fs);

LLAPI std::vector<std::string> GetFileNameList(const std::string& dir);
LLAPI bool CreateDirs(const std::string path);
LLAPI std::optional<std::string> ReadAllFile(const std::string& filePath, bool isBinary = false);
LLAPI bool WriteAllFile(const std::string& filePath, const std::string& content, bool isBinary = false);
LLAPI std::pair<int, std::string> UncompressFile(const std::string& filePath, const std::string& toDir, int processTimeout);