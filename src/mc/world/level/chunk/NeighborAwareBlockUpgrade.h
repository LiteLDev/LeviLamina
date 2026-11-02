#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/NeighborAwareBlockUpdateType.h"
#include "mc/world/level/chunk/NeighborAwareBlockUpgradeVersionType.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

namespace NeighborAwareBlockUpgrade {
// functions
// NOLINTBEGIN
MCNAPI ::NeighborAwareBlockUpdateType getLegacyStructureUpgradeType(::Block const& block, int dataVersion);

MCNAPI ::NeighborAwareBlockUpdateType
getUpgradeType(::Block const& block, ::NeighborAwareBlockUpgradeVersionType version);
// NOLINTEND

} // namespace NeighborAwareBlockUpgrade
