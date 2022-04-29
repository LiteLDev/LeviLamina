#pragma once
#include <Global.h>
#include <windows.h>
#include <string>

class Logger;
using namespace std;

LIAPI bool PrintCurrentStackTraceback(PEXCEPTION_POINTERS e = nullptr, Logger* logger = nullptr);

inline bool PrintCurrentStackTraceback(Logger* logger)
{
    return PrintCurrentStackTraceback(nullptr, logger);
}

LIAPI HMODULE GetCallerModule(unsigned long FramesToSkip = 0);
LIAPI std::string GetCallerModuleFileName(unsigned long FramesToSkip = 0);
LIAPI std::string GetModuleVersionStr(HMODULE hModule);
LIAPI std::string GetFileVersionStr(std::string const& filePath);
