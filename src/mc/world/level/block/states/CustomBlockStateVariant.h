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
    // vIndex: 0, symbol: __gen_??1CustomBlockStateVariant@@UEAA@XZ
    virtual ~CustomBlockStateVariant() = default;

    // vIndex: 1, symbol: ?toNBT@CustomBlockStateVariant@@UEBAXAEAVCompoundTag@@H@Z
    virtual void toNBT(class CompoundTag& tag, int val) const;

    // vIndex: 2, symbol: ?fromNBT@CustomBlockStateVariant@@UEBA_NAEBVCompoundTag@@AEAH@Z
    virtual bool fromNBT(class CompoundTag const& tag, int& outValue) const;

    // NOLINTEND
};
