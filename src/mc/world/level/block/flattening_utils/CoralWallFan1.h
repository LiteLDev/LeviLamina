#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
namespace FlatteningUtils { struct Instance; }
// clang-format on

namespace FlatteningUtils::CoralWallFan1 {
// functions
// NOLINTBEGIN
MCAPI ::FlatteningUtils::Instance get();

MCAPI ::std::vector<::BlockType::RemovedStateCollection::SplitBlock> getDeadSplitStates(bool hangType);

MCAPI ::std::vector<::BlockType::RemovedStateCollection::SplitBlock> getHangTypeSplitStates(bool dead);
// NOLINTEND

} // namespace FlatteningUtils::CoralWallFan1
