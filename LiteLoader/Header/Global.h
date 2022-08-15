#pragma once
#pragma warning(disable : 4250)

#ifdef LITELOADER_EXPORTS
#define LIAPI __declspec(dllexport)
#else
#define LIAPI __declspec(dllimport)
#endif

#define MCAPI __declspec(dllimport)
#define MCVAPI __declspec(dllimport)
#define MCINLINE inline
#define MCCLS

#ifndef FMT_HEADER_ONLY
#define FMT_HEADER_ONLY
#endif

/// std containers
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <bitset>

#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>

#include <iostream>
#include <optional>
#include <functional>
#include <mutex>
#include <shared_mutex>

// std utils
#include <cuchar>
#include <utility>
#include <variant>
#include <numeric>
#include <cmath>
#include <random>
#include <algorithm>
#include <iomanip>
#include <xhash>

// windows types
#include <minwindef.h>

#include "third-party/entt/entt.hpp"
#include "third-party/gsl/gsl"
#include "third-party/seh_exception/seh_exception.hpp"
#include "third-party/FMT/chrono.h"
#include "third-party/FMT/color.h"
#include "third-party/FMT/core.h"
#include "third-party/FMT/os.h"
#include "third-party/FMT/printf.h"

#include "GlobalServiceAPI.h"
#include "Utils/Optional.h"

//basic mc types
#include "MC/Types.hpp"

using std::map;
using std::string;
using std::vector;
