#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/states/BlockState.h"

class CustomBlockStateVariant : public ::BlockState {
public:
    // prevent constructor by default
    CustomBlockStateVariant& operator=(CustomBlockStateVariant const&);
    CustomBlockStateVariant(CustomBlockStateVariant const&);
    CustomBlockStateVariant();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CustomBlockStateVariant() = default;

    // vIndex: 1
    virtual void toNBT(class CompoundTag& tag, int val) const;

    // vIndex: 2
    virtual bool fromNBT(class CompoundTag const& tag, int& outValue) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool fromNBT$(class CompoundTag const& tag, int& outValue) const;

    MCAPI void toNBT$(class CompoundTag& tag, int val) const;

    // NOLINTEND
};
