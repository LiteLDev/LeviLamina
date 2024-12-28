#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CommandOrigin;
class CompoundTag;
class Vec3;
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
    // prevent constructor by default
    CommandPosition& operator=(CommandPosition const&);
    CommandPosition(CommandPosition const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandPosition();

    MCAPI explicit CommandPosition(::Vec3 const& absoluteOffset);

    MCAPI ::BlockPos getBlockPos(::Vec3 const& ref, ::Vec3 const& offsetFromBase) const;

    MCAPI ::BlockPos getBlockPos(int version, ::CommandOrigin const& origin, ::Vec3 const& offsetFromBase) const;

    MCAPI ::Vec3 getPosition(::Vec3 const& ref, ::Vec3 const& offsetFromBase) const;

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
