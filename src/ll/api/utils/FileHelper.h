#pragma once
#include "ll/api/base/Global.h"
#include <fstream>
#include <optional>
#include <string>

LLNDAPI FILE*  GetFILEfromFstream(std::fstream& fs);
LLNDAPI HANDLE GetHANDLEfromFstream(std::fstream& fs);

LLNDAPI std::vector<std::string> GetFileNameList(std::string const& dir);
LLAPI bool                       CreateDirs(std::string const& path);
LLNDAPI std::optional<std::string> ReadAllFile(std::string const& filePath, bool isBinary = false);
LLAPI bool WriteAllFile(std::string const& filePath, std::string const& content, bool isBinary = false);
LLAPI      std::pair<int, std::string>
           UncompressFile(std::string const& filePath, std::string const& toDir, int processTimeout);