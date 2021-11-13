#pragma once
#pragma warning(disable:4250)

#ifdef LITELOADER_EXPORTS
#define LIAPI __declspec(dllexport)
#else
#define LIAPI __declspec(dllimport)
#endif

#define MCAPI __declspec(dllimport)
#define MCINLINE inline
#define MCCLS

#include <minwindef.h>
#include "HookAPI.h"
#include <string>
#include <vector>
#include <iostream>
#include <optional>
#include <functional>
#include <gsl/gsl>
#include <bitset>
#include <utility>
#include <set>
#include <unordered_set>
#include "serviceLocate.h"
#include "Types.h"
#include "Utils/Json.h"

// Types
typedef std::string xuid_t;
namespace mce {
	class UUID;
class Color;
}; // namespace mce
typedef unsigned long long QWORD;

