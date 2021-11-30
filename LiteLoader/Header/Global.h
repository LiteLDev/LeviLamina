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

// 暂时为了兼容
#define Tag CompoundTag

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
#include <variant>

#include <gsl/gsl>
#include <entt/entt.hpp>
#include <seh_exception/seh_exception.hpp>

#include "HookAPI.h"
#include "MC/Types.hpp"
#include "utils/optional.h"
#include "Utils/GlobalService.h"
#include "Utils/Json.h"

using std::map;
using std::string;
using std::vector;