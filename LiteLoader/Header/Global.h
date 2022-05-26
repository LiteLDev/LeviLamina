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

#ifndef FMT_HEADER_ONLY
#define FMT_HEADER_ONLY
#endif

#include <bitset>
#include <functional>
#include <iostream>
#include <mutex>
#include <optional>
#include <queue>
#include <set>
#include <map>
#include <stack>
#include <string>
#include <cuchar>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <variant>
#include <vector>
#include <numeric>
#include <cmath>
#include <random>
#include <algorithm>
#include <iomanip>
#include <xhash>

#include <minwindef.h>

#include "third-party/entt/entt.hpp"
#include "third-party/gsl/gsl"
#include "third-party/seh_exception/seh_exception.hpp"
#include "third-party/FMT/chrono.h"
#include "third-party/FMT/color.h"
#include "third-party/FMT/core.h"
#include "third-party/FMT/os.h"
#include "third-party/FMT/printf.h"

#include "MC/Types.hpp"
#include "GlobalServiceAPI.h"
#include "Utils/Optional.h"

using std::map;
using std::string;
using std::vector;
