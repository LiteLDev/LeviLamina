#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandPosition {
public:
    // prevent constructor by default
    CommandPosition& operator=(CommandPosition const&);
    CommandPosition(CommandPosition const&);

public:
    // NOLINTBEGIN
    MCAPI CommandPosition();

    MCAPI explicit CommandPosition(class Vec3 const& absoluteOffset);

    MCAPI class BlockPos getBlockPos(class Vec3 const& ref, class Vec3 const& offsetFromBase) const;

    MCAPI class BlockPos
    getBlockPos(int version, class CommandOrigin const& origin, class Vec3 const& offsetFromBase) const;

    MCAPI class Vec3 getPosition(class Vec3 const& ref, class Vec3 const& offsetFromBase) const;

    MCAPI class Vec3
    getPosition(int version, class CommandOrigin const& origin, class Vec3 const& offsetFromBase) const;

    MCAPI class CompoundTag serialize() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(class Vec3 const& absoluteOffset);

    // NOLINTEND
};
