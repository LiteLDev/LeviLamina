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
MCNAPI ::Core::Result deserializeFromFile(::Json::Value& json, ::Core::Path const& path);
// NOLINTEND

} // namespace Core::JsonUtil
