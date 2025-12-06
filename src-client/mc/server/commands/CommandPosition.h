#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CommandOrigin;
class CompoundTag;
// clang-format on

class CommandPosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mOffset;
    ::ll::TypedStorage<1, 1, bool>    mRelativeX;
    ::ll::TypedStorage<1, 1, bool>    mRelativeY;
    ::ll::TypedStorage<1, 1, bool>    mRelativeZ;
    ::ll::TypedStorage<1, 1, bool>    mLocal;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandPosition();

    MCAPI explicit CommandPosition(::Vec3 const& absoluteOffset);

    MCAPI ::BlockPos getBlockPos(int version, ::CommandOrigin const& origin, ::Vec3 const& offsetFromBase) const;

    MCAPI ::Vec3 getPosition(int version, ::CommandOrigin const& origin, ::Vec3 const& offsetFromBase) const;

    MCAPI ::CompoundTag serialize() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Vec3 const& absoluteOffset);
    // NOLINTEND
};
