#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace FlatteningUtils { struct Instance; }
// clang-format on

namespace FlatteningUtils::CoralWallFan3 {
// functions
// NOLINTBEGIN
MCNAPI ::FlatteningUtils::Instance get();

MCNAPI ::std::function<::Block const*(int)> getBlockComplexAliasCallback();

MCNAPI ::std::vector<::BlockType::RemovedStateCollection::SplitBlock> getDeadSplitStates(bool hangType);

MCNAPI ::std::vector<::BlockType::RemovedStateCollection::SplitBlock> getHangTypeSplitStates(bool dead);
// NOLINTEND

} // namespace FlatteningUtils::CoralWallFan3
