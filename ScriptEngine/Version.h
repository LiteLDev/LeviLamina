#pragma once
#include <LLAPI.h>

LL::Version GetScriptEngineVersion();

// 版本记录
#define LLSE_VERSION_MAJOR GetScriptEngineVersion().major
#define LLSE_VERSION_MINOR GetScriptEngineVersion().minor
#define LLSE_VERSION_REVISION GetScriptEngineVersion().revision

#define LLSE_VERSION_STATUS Release
#define LLSE_VERSION_STATUS_STRING "Release"

#define LLSE_VERSION LL::Version(LLSE_VERSION_MAJOR, LLSE_VERSION_MINOR, LLSE_VERSION_REVISION, LL::Version::Status::LLSE_VERSION_STATUS)