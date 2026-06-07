#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/facing/Name.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/PortalAxis.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class PortalRecord;
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
    // prevent constructor by default
    PortalShape();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PortalShape(::BlockSource const& source, ::BlockPos const& pos, ::PortalAxis axis);

    MCAPI int _calculatePortalHeight(::BlockSource const& source);

    MCAPI int _getDistanceUntilEdge(::BlockPos const& pos, ::Facing::Name direction, ::BlockSource const& source) const;

    MCAPI void createPortalBlocks(::WorldChangeTransaction& transaction) const;

    MCAPI ::PortalRecord createRecord() const;

    MCAPI void evaluate(::BlockPos const& originalPosition, ::BlockSource const& source);

    MCFOLD int getNumberOfPortalBlocks() const;

    MCAPI bool isFilled() const;

    MCAPI bool isValid() const;

    MCAPI void removePortalBlocks(::WorldChangeTransaction& transaction, ::BlockPos const& firstPortalPosition) const;

    MCFOLD void setAxis(::PortalAxis axis);

    MCAPI void updateNeighboringBlocks(::BlockSource& source, ::Vec3 const& perpendicularAxis) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockSource const& source, ::BlockPos const& pos, ::PortalAxis axis);
    // NOLINTEND
};
