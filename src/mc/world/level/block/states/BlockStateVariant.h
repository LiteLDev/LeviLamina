#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/block/states/BlockState.h"

template <typename T0>
class BlockStateVariant : public ::BlockState {
public:
    // prevent constructor by default
    BlockStateVariant& operator=(BlockStateVariant const&);
    BlockStateVariant(BlockStateVariant const&);
    BlockStateVariant();

    // NOLINTBEGIN
    virtual ~BlockStateVariant();

    virtual void toNBT(class CompoundTag&, int) const;

    virtual bool fromNBT(class CompoundTag const&, int&) const;
    // NOLINTEND
};
