#pragma once
#include "ll/api/LoggerAPI.h"
#include "ll/api/base/Global.h"
#include <fstream>
#include <optional>
#include <string>

LLAPI FILE*  GetFILEfromFstream(std::fstream& fs);
LLAPI HANDLE GetHANDLEfromFstream(std::fstream& fs);

LLAPI std::vector<std::string> GetFileNameList(std::string const& dir);
LLAPI bool                     CreateDirs(std::string const& path);
LLAPI std::optional<std::string> ReadAllFile(std::string const& filePath, bool isBinary = false);
LLAPI bool WriteAllFile(std::string const& filePath, std::string const& content, bool isBinary = false);
LLAPI      std::pair<int, std::string>
           UncompressFile(std::string const& filePath, std::string const& toDir, int processTimeout);