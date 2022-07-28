#ifndef PCH_H
#define PCH_H

//定义导出
#ifdef VCRUNTIME140_EXPORTS
#define VCRUNTIME140_API __declspec(dllexport)
#else
#define VCRUNTIME140_API __declspec(dllimport)
#endif
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <windows.h>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <new>
#include <string>
#include <vector>
#endif // PCH_H
