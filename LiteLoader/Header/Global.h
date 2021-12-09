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
#include <queue>
#include <stack>
#include <variant>
#include <mutex>

#include <gsl/gsl>
#include <entt/entt.hpp>
#include <seh_exception/seh_exception.hpp>

#include "MC/Types.hpp"
#include "HookAPI.h"
#include "utils/optional.h"
#include "Utils/GlobalService.h"
using std::map;
using std::string;
using std::vector;