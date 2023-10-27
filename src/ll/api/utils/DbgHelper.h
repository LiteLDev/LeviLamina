#pragma once
#include "ll/api/base/Global.h"
#include <string>

// flag: VS_VERSION.dwFileFlags
LLNDAPI HMODULE GetCallerModule(ulong FramesToSkip = 0);
LLNDAPI std::string GetCallerModuleFileName(ulong FramesToSkip = 0);
LLAPI bool          GetFileVersion(
             const wchar_t* filePath,
             ushort*        ver1,
             ushort*        ver2,
             ushort*        ver3,
             ushort*        ver4 = nullptr,
             uint*          flag = nullptr
         );
LLNDAPI std::string GetFileVersionString(HMODULE hModule, bool includeFlag = false);
LLNDAPI std::string GetFileVersionString(std::string const& filePath, bool includeFlag = false);
