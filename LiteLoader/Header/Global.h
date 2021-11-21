#pragma once
#pragma warning(disable : 4250)

#ifdef LITELOADER_EXPORTS
#define LIAPI __declspec(dllexport)
#else
#define LIAPI __declspec(dllimport)
#endif

#define MCAPI __declspec(dllimport)
#define MCINLINE inline
#define MCCLS

#include <bitset>
#include <functional>
#include <iostream>
#include <minwindef.h>
#include <optional>
#include <set>
#include <string>
#include <uchar.h>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>

#include <gsl/gsl>
#include <seh_exception/seh_exception.hpp>

#include "HookAPI.h"
#include "Types.h"
#include "Utils/GlobalService.h"
#include "Utils/Json.h"

using std::map;
using std::string;
using std::vector;

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