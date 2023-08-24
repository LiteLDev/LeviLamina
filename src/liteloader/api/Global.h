#pragma once
#pragma warning(disable : 4250)
#pragma warning(disable : 4949)

#include "liteloader/api/Macro.h"
#include "mc/_HeaderOutputPredefine.h"

#ifndef NOMINMAX
#define NOMINMAX
#endif // NOMINMAX

#define MCINLINE inline

#ifndef FMT_HEADER_ONLY
#define FMT_HEADER_ONLY
#endif

#ifndef LL_CONSTEXPR
#if __cplusplus <= 201703L
#define LL_CONSTEXPR inline
#else
#define LL_CONSTEXPR constexpr
#endif
#endif

/// std containers
#include <bitset>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

// std utils
#include <algorithm>
#include <cmath>
#include <cuchar>
#include <functional>
#include <iomanip>
#include <iostream>
#include <mutex>
#include <numeric>
#include <optional>
#include <random>
#include <shared_mutex>
#include <utility>
#include <variant>
#include <xhash>

// windows types
#include <minwindef.h>

#pragma unmanaged
#include <entt/entt.hpp>
#pragma managed
#include <FMT/chrono.h>
#include <FMT/color.h>
#include <FMT/core.h>
#include <FMT/os.h>
#include <FMT/printf.h>
#include <gsl/gsl>

#include "liteloader/api/GlobalServiceAPI.h"
#include "liteloader/api/utils/Optional.h"
#include "liteloader/api/utils/SehTranslator.h"

// basic mc types
#include "mc/Types.hpp"

using std::map;
using std::string;
using std::vector;

#include "liteloader/api/memory/MemoryUtils.h"

using ll::memory::dAccess;
