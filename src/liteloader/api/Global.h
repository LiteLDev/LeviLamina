#pragma once
#pragma warning(disable : 4250)
#pragma warning(disable : 4949)

#include "liteloader/api/Macro.h"

#ifndef NOMINMAX
#define NOMINMAX
#endif // NOMINMAX

#define MCAPI    __declspec(dllimport)
#define MCVAPI   __declspec(dllimport)
#define MCINLINE inline
#define MCCLS

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

#define M_E        2.71828182845904523536  // e
#define M_LOG2E    1.44269504088896340736  // log2(e)
#define M_LOG10E   0.434294481903251827651 // log10(e)
#define M_LN2      0.693147180559945309417 // ln(2)
#define M_LN10     2.30258509299404568402  // ln(10)
#define M_PI       3.14159265358979323846  // pi
#define M_PI_2     1.57079632679489661923  // pi/2
#define M_PI_4     0.785398163397448309616 // pi/4
#define M_1_PI     0.318309886183790671538 // 1/pi
#define M_2_PI     0.636619772367581343076 // 2/pi
#define M_2_SQRTPI 1.12837916709551257390  // 2/sqrt(pi)
#define M_SQRT2    1.41421356237309504880  // sqrt(2)
#define M_SQRT1_2  0.707106781186547524401 // 1/sqrt(2)

using std::map;
using std::string;
using std::vector;

#include "liteloader/api/memory/MemoryUtils.h"

using ll::memory::dAccess;
