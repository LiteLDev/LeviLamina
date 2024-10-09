#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/WoodType.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace FlatteningUtils { struct Instance; }
// clang-format on

namespace FlatteningUtils::Wood {
// NOLINTBEGIN
MCAPI struct FlatteningUtils::Instance get();

MCAPI std::function<class Block const*(int)> getComplexAliasCallback();

MCAPI std::vector<struct BlockLegacy::RemovedStateCollection::SplitBlock> getStrippedSplitStates(::WoodType type);

MCAPI std::vector<struct BlockLegacy::RemovedStateCollection::SplitBlock> getWoodTypeSplitStates(bool stripped);
// NOLINTEND

}; // namespace FlatteningUtils::Wood
