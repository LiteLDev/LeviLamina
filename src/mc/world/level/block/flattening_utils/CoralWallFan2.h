#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
namespace FlatteningUtils { struct Instance; }
// clang-format on

namespace FlatteningUtils::CoralWallFan2 {
// functions
// NOLINTBEGIN
MCAPI ::FlatteningUtils::Instance get();

MCAPI ::std::vector<::BlockLegacy::RemovedStateCollection::SplitBlock> getDeadSplitStates(bool hangType);

MCAPI ::std::vector<::BlockLegacy::RemovedStateCollection::SplitBlock> getHangTypeSplitStates(bool dead);
// NOLINTEND

} // namespace FlatteningUtils::CoralWallFan2
