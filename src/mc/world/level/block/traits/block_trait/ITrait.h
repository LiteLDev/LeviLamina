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
    // prevent constructor by default
    ITrait& operator=(ITrait const&);
    ITrait(ITrait const&);
    ITrait();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ITrait() = default;

    // vIndex: 1
    virtual void applyToBlockLegacy(class BlockLegacy& blockLegacy) const = 0;

    // vIndex: 2
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const = 0;

    // vIndex: 3
    virtual void initializeFromNetwork(class CompoundTag const& tag) = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};

}; // namespace BlockTrait
