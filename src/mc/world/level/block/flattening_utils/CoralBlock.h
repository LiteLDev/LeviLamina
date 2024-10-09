#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/CoralColor.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace FlatteningUtils { struct Instance; }
// clang-format on

namespace FlatteningUtils::CoralBlock {
// NOLINTBEGIN
MCAPI struct FlatteningUtils::Instance get();

MCAPI std::function<class Block const*(int)> getBlockComplexAliasCallback();

MCAPI std::vector<struct BlockLegacy::RemovedStateCollection::SplitBlock> getColorSplitStates(bool dead);

MCAPI std::vector<struct BlockLegacy::RemovedStateCollection::SplitBlock> getDeadSplitStates(::CoralColor color);
// NOLINTEND

}; // namespace FlatteningUtils::CoralBlock
