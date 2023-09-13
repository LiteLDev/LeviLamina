#pragma once
#include "liteloader/api/base/Global.h"
#include <string>

class Logger;

LLAPI bool PrintCurrentStackTraceback(PEXCEPTION_POINTERS e = nullptr, Logger* logger = nullptr);

inline bool PrintCurrentStackTraceback(Logger* logger) { return PrintCurrentStackTraceback(nullptr, logger); }

// flag: VS_VERSION.dwFileFlags
LLAPI HMODULE GetCallerModule(ulong FramesToSkip = 0);
LLAPI std::string GetCallerModuleFileName(ulong FramesToSkip = 0);
LLAPI bool        GetFileVersion(
           const wchar_t* filePath,
           ushort*        ver1,
           ushort*        ver2,
           ushort*        ver3,
           ushort*        ver4 = nullptr,
           uint*          flag = nullptr
       );
LLAPI std::string GetFileVersionString(HMODULE hModule, bool includeFlag = false);
LLAPI std::string GetFileVersionString(std::string const& filePath, bool includeFlag = false);
