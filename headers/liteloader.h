#pragma once
#ifdef LITELOADER_EXPORTS
#define LIAPI __declspec(dllexport)
#else
#define LIAPI __declspec(dllexport)
#endif
typedef unsigned char uchar;
#define LiteLoaderVersion "0.2.3_fix"
#define LiteLoaderVersionNum (unsigned short) 6
