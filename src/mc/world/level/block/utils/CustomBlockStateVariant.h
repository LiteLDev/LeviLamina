#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BlockState.h"

class CustomBlockStateVariant : public ::BlockState {
public:
    // prevent constructor by default
    CustomBlockStateVariant& operator=(CustomBlockStateVariant const&);
    CustomBlockStateVariant(CustomBlockStateVariant const&);
    CustomBlockStateVariant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~CustomBlockStateVariant() = default;

    // vIndex: 1, symbol: ?toNBT@CustomBlockStateVariant@@UEBAXAEAVCompoundTag@@H@Z
    virtual void toNBT(class CompoundTag&, int) const;

    // vIndex: 2, symbol: ?fromNBT@CustomBlockStateVariant@@UEBA_NAEBVCompoundTag@@AEAH@Z
    virtual bool fromNBT(class CompoundTag const&, int&) const;

    // NOLINTEND
};
