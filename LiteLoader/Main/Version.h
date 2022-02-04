#pragma once
#include <LLAPI.h>

#define LITELOADER_VERSION_MAJOR    LL::getLoaderVersion().major
#define LITELOADER_VERSION_MINOR    LL::getLoaderVersion().minor
#define LITELOADER_VERSION_REVISION LL::getLoaderVersion().revision
#define LITELOADER_VERSION_BUILD    LL::getLoaderVersion().build
#define LITELOADER_VERSION          LL::getLoaderVersion()

#define LITELOADER_VERSION_STATUS   Release
