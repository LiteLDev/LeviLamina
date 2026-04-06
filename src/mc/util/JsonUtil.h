#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { class Result; }
namespace Json { class Value; }
// clang-format on

namespace Core::JsonUtil {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::Core::Result deserializeFromFile(::Json::Value& json, ::Core::Path const& path);
#endif
// NOLINTEND

} // namespace Core::JsonUtil
