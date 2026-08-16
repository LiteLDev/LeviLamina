#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class NeighborBlockDirections;
// clang-format on

namespace BlockTrait {

class IConnectionUpdateCallback {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IConnectionUpdateCallback();

    virtual ::Block const& updateConnection(
        ::BlockSource const&      region,
        ::Block const&            block,
        ::BlockPos const&         pos,
        ::NeighborBlockDirections directionsToCheck
    ) const = 0;
    // NOLINTEND
};

} // namespace BlockTrait
