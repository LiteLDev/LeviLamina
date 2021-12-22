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
#include <mutex>
#include <optional>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <cuchar>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <variant>
#include <vector>

#include "third-party/entt/entt.hpp"
#include "third-party/gsl/gsl"
#include "third-party/seh_exception/seh_exception.hpp"

#include "HookAPI.h"
#include "MC/Types.hpp"
#include "GlobalServiceAPI.h"
#include "Utils/Optional.h"
#include "LoggerAPI.h"
using std::map;
using std::string;
using std::vector;

class Logger;

extern Logger logger;
