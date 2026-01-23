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
    virtual ~IConnectionUpdateCallback() = default;

    virtual ::Block const&
    updateConnection(::BlockSource const&, ::Block const&, ::BlockPos const&, ::NeighborBlockDirections) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockTrait
