#pragma once
#include <string>
#ifdef LITELOADER_EXPORTS
#    define LIAPI __declspec(dllexport)
#else
#    define LIAPI __declspec(dllexport)
#endif
typedef unsigned char uchar;
#define LiteLoaderVersion "1.1.2"
#define LiteLoaderVersionNum (unsigned short)12

namespace loaderapi {
LIAPI std::string getLoaderVersion();
LIAPI unsigned short getLoaderVersionNum();
};  // namespace loaderapi
