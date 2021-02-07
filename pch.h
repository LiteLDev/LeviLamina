#pragma once
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <unordered_map>
#include <filesystem>
#include <string_view>
#include <fstream>
#include "detours/detours.h"
using namespace std;
extern "C" {
	__declspec(dllexport) int HookFunction(void*, void**, void*);
	__declspec(dllexport) void* GetServerSymbol(const char*);
}