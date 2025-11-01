#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace TintMethodUtility {
// functions
// NOLINTBEGIN
MCNAPI void bindType(::cereal::ReflectionCtx& ctx);

MCNAPI ::TintMethod fromString(::std::string const& tintMethodString, ::TintMethod defaultValue);
// NOLINTEND

}
