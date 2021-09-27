#pragma once
#include <string>
#ifdef LITELOADER_EXPORTS
#    define LIAPI __declspec(dllexport)
#else
#    define LIAPI __declspec(dllexport)
#endif
#define LITELOADER_VERSION "2.0.0"
#define LITELOADER_VERSION_NUMBER 20
typedef unsigned char uchar;

namespace loaderapi {
LIAPI std::string getLoaderVersion();
LIAPI unsigned short getLoaderVersionNum();
LIAPI bool           isDebugMode();
LIAPI std::string getServerVersion();
};  // namespace loaderapi