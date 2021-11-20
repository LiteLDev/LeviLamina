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

#include <string>
#include <vector>
#include <iostream>
#include <optional>
#include <functional>
#include <utility>
#include <set>
#include <bitset>
#include <unordered_map>
#include <unordered_set>
#include <minwindef.h>

#include <gsl/gsl>
#include <seh_exception/seh_exception.hpp>

#include "Utils/GlobalService.h"
#include "Utils/Json.h"
#include "HookAPI.h"
#include "Types.h"

using std::string;
using std::vector;
using std::map;

// Types
typedef std::string xuid_t;
namespace mce {
	class UUID;
class Color;
}; // namespace mce
typedef unsigned long long QWORD;

template <typename RTN = void, typename... Args>
RTN inline VirtualCall(void* _this, uintptr_t off, Args... args) {
    return (*(RTN(**)(void*, Args...))(*(uintptr_t*)_this + off))(_this, args...);
}