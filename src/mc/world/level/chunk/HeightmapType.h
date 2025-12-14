#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/HeightmapToken.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace br::spawn::HeightmapType {
// functions
// NOLINTBEGIN
MCAPI ::std::vector<::std::tuple<::std::string, ::std::function<bool(::Block const&)>>> defaults();
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::br::spawn::HeightmapToken const& MOTION_BLOCKING_NO_LEAVES();
// NOLINTEND

} // namespace br::spawn::HeightmapType
