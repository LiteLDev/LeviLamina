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
// functions
// NOLINTBEGIN
MCNAPI ::FlatteningUtils::Instance get();

MCNAPI ::std::function<::Block const*(int)> getComplexAliasCallback();

MCNAPI ::std::vector<::BlockLegacy::RemovedStateCollection::SplitBlock> getStrippedSplitStates(::WoodType type);

MCNAPI ::std::vector<::BlockLegacy::RemovedStateCollection::SplitBlock> getWoodTypeSplitStates(bool stripped);
// NOLINTEND

} // namespace FlatteningUtils::Wood
