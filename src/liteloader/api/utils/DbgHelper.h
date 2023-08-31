#pragma once
#include "liteloader/api/Global.h"
#include <string>

class Logger;

LLAPI bool PrintCurrentStackTraceback(PEXCEPTION_POINTERS e = nullptr, Logger* logger = nullptr);

inline bool PrintCurrentStackTraceback(Logger* logger)
{
    return PrintCurrentStackTraceback(nullptr, logger);
}

// flag: VS_VERSION.dwFileFlags
LLAPI HMODULE GetCallerModule(unsigned long FramesToSkip = 0);
LLAPI std::string GetCallerModuleFileName(unsigned long FramesToSkip = 0);
LLAPI bool GetFileVersion(const wchar_t* filePath, uint16_t* ver1, uint16_t* ver2, uint16_t* ver3, uint16_t* ver4 = nullptr, uint32_t* flag = nullptr);
LLAPI std::string GetFileVersionString(HMODULE hModule, bool includeFlag = false);
LLAPI std::string GetFileVersionString(std::string const& filePath, bool includeFlag = false);
