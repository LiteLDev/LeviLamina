#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/WoodType.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace FlatteningUtils { struct Instance; }
// clang-format on

namespace FlatteningUtils::Wood {
// functions
// NOLINTBEGIN
MCAPI ::FlatteningUtils::Instance get();

MCAPI ::std::function<::Block const*(int)> getComplexAliasCallback();

MCAPI ::std::vector<::BlockType::RemovedStateCollection::SplitBlock> getStrippedSplitStates(::WoodType type);

MCAPI ::std::vector<::BlockType::RemovedStateCollection::SplitBlock> getWoodTypeSplitStates(bool stripped);
// NOLINTEND

} // namespace FlatteningUtils::Wood
