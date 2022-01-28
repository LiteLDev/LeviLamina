#pragma once
#include <LLAPI.h>

LL::Version GetScriptEngineVersion();

// 版本记录
#define LXL_VERSION_MAJOR GetScriptEngineVersion().major
#define LXL_VERSION_MINOR GetScriptEngineVersion().minor
#define LXL_VERSION_REVISION GetScriptEngineVersion().revision

#define LXL_VERSION_STATUS Release
#define LXL_VERSION_STATUS_STRING "Release"

#define LXL_VERSION LL::Version(LXL_VERSION_MAJOR, LXL_VERSION_MINOR, LXL_VERSION_REVISION, LL::Version::Status::LXL_VERSION_STATUS)