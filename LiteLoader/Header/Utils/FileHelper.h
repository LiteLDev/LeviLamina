#pragma once
#include <fstream>
#include <optional>
#include <string>
#include <minwindef.h>
#include <vector>
#include <optional>

#ifdef LITELOADER_EXPORTS
#define LIAPI __declspec(dllexport)
#else
#define LIAPI __declspec(dllimport)
#endif

LIAPI FILE* GetFILEfromFstream(std::fstream& fs);
LIAPI HANDLE GetHANDLEfromFstream(std::fstream& fs);

LIAPI std::vector<std::string> GetFileNameList (const std::string& dir);
LIAPI bool CreateDirs (const std::string path);
LIAPI std::optional<std::string> ReadAllFile(const std::string& filePath, bool isBinary = false);
LIAPI bool WriteAllFile(const std::string& filePath, const std::string& content, bool isBinary = false);