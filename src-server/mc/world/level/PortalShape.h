#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/facing/Name.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/PortalAxis.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Vec3;
class WorldChangeTransaction;
// clang-format on

class PortalShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PortalAxis>   mAxis;
    ::ll::TypedStorage<1, 1, ::Facing::Name> mRightDir;
    ::ll::TypedStorage<1, 1, ::Facing::Name> mLeftDir;
    ::ll::TypedStorage<4, 4, int>            mNumPortalBlocks;
    ::ll::TypedStorage<4, 12, ::BlockPos>    mBottomLeft;
    ::ll::TypedStorage<1, 1, bool>           mBottomLeftValid;
    ::ll::TypedStorage<4, 4, int>            mHeight;
    ::ll::TypedStorage<4, 4, int>            mWidth;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int _calculatePortalHeight(::BlockSource const& source);

    MCAPI void createPortalBlocks(::WorldChangeTransaction& transaction) const;

    MCAPI void evaluate(::BlockPos const& originalPosition, ::BlockSource const& source);

    MCAPI void removePortalBlocks(::WorldChangeTransaction& transaction, ::BlockPos const& firstPortalPosition) const;

    MCAPI void updateNeighboringBlocks(::BlockSource& source, ::Vec3 const& perpendicularAxis) const;
    // NOLINTEND
};
