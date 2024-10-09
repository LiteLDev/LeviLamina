#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/nbt/CompoundTag.h"

class CommandPosition {
public:
    Vec3 mOffset;
    bool mRelativeX;
    bool mRelativeY;
    bool mRelativeZ;
    bool mLocal;

    CommandPosition() = default;

public:
    // NOLINTBEGIN
    MCAPI explicit CommandPosition(class Vec3 const& absoluteOffset);

    MCAPI class BlockPos getBlockPos(class Vec3 const& ref, class Vec3 const& offsetFromBase = {}) const;

    MCAPI class BlockPos
    getBlockPos(int version, class CommandOrigin const& origin, class Vec3 const& offsetFromBase = {}) const;

    MCAPI class Vec3 getPosition(class Vec3 const& ref, class Vec3 const& offsetFromBase = {}) const;

    MCAPI class Vec3
    getPosition(int version, class CommandOrigin const& origin, class Vec3 const& offsetFromBase = {}) const;

    MCAPI class CompoundTag serialize() const;

    // NOLINTEND
};
