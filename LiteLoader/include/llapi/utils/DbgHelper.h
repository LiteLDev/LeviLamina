#pragma once
#include "llapi/Global.h"
#include <string>

class Logger;

LIAPI bool PrintCurrentStackTraceback(PEXCEPTION_POINTERS e = nullptr, Logger* logger = nullptr);

inline bool PrintCurrentStackTraceback(Logger* logger)
{
    return PrintCurrentStackTraceback(nullptr, logger);
}

// flag: VS_VERSION.dwFileFlags
LIAPI HMODULE GetCallerModule(unsigned long FramesToSkip = 0);
LIAPI std::string GetCallerModuleFileName(unsigned long FramesToSkip = 0);
LIAPI bool GetFileVersion(const wchar_t* filePath, unsigned short* ver1, unsigned short* ver2, unsigned short* ver3, unsigned short* ver4 = nullptr, unsigned int* flag = nullptr);
LIAPI std::string GetFileVersionString(HMODULE hModule, bool includeFlag = false);
LIAPI std::string GetFileVersionString(std::string const& filePath, bool includeFlag = false);
