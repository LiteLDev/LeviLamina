#pragma once
#include <fstream>
#include <optional>
#include <string>
#include "llapi/Global.h"
#include "llapi/LoggerAPI.h"

LIAPI FILE* GetFILEfromFstream(std::fstream& fs);
LIAPI HANDLE GetHANDLEfromFstream(std::fstream& fs);

LIAPI std::vector<std::string> GetFileNameList(const std::string& dir);
LIAPI bool CreateDirs(const std::string path);
LIAPI std::optional<std::string> ReadAllFile(const std::string& filePath, bool isBinary = false);
LIAPI bool WriteAllFile(const std::string& filePath, const std::string& content, bool isBinary = false);
LIAPI std::pair<int, std::string> UncompressFile(const std::string& filePath, const std::string& toDir, int processTimeout);