#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockLegacy;
class CompoundTag;
// clang-format on

namespace BlockTrait {

class ITrait {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ITrait() = default;

    // vIndex: 1
    virtual void applyToBlockLegacy(::BlockLegacy&) const = 0;

    // vIndex: 2
    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag() const = 0;

    // vIndex: 3
    virtual void initializeFromNetwork(::CompoundTag const&) = 0;
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
