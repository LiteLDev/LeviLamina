#pragma once
#include <minwindef.h>
#ifdef LITELOADER_EXPORTS
#define LIAPI __declspec(dllexport)
#else
#define LIAPI __declspec(dllimport)
#endif
#define MCAPI __declspec(dllimport)
#define MCINLINE inline
#define MCCLS
#include <Utils/Warpper.h>
#include <HookAPI.h>
#include <string>
#include <vector>
#include <iostream>
#include <optional>
#include <functional>
#include <gsl/gsl>
#include <bitset>
#include <utility>
#include <Templates.h>
#include <Utils/Json.h>
typedef unsigned long long xuid_t;
namespace mce {
class UUID;
};
