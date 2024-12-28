#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/RenderState.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Degree; }
namespace mce { struct Radian; }
// clang-format on

namespace mce {
// functions
// NOLINTBEGIN
MCAPI ::mce::Radian operator*(::mce::Radian lhs, float rhs);

MCAPI ::mce::Degree operator-(::mce::Degree lhs, float rhs);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::unordered_map<::std::string, ::mce::RenderState> const&& featuresMap();
// NOLINTEND

} // namespace mce
