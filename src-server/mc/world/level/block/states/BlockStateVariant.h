#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/block/states/BlockState.h"

template <typename T0>
class BlockStateVariant : public ::BlockState {
public:
    using Type = T0;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockStateVariant() /*override*/ = default;

    // vIndex: 1
    virtual void toNBT(::CompoundTag&, int) const /*override*/;

    // vIndex: 2
    virtual bool fromNBT(::CompoundTag const&, int&) const /*override*/;
    // NOLINTEND};
