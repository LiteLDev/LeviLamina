#pragma once
#include <minwindef.h>

#ifdef LITELOADER_EXPORTS
#define LIAPI __declspec(dllexport)
#else
#define LIAPI __declspec(dllimport)
#endif