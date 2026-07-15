#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToGoal.h"
#include "mc/world/actor/ai/village/POIType.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class POIInstance;
class Path;
class Vec3;
// clang-format on

class MoveToPOIGoal : public ::BaseMoveToGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::POIType>                 mPOIType;
    ::ll::TypedStorage<4, 24, ::AABB>                   mPOIBoundingBox;
    ::ll::TypedStorage<1, 1, bool>                      mUsingBoundingBox;
    ::ll::TypedStorage<1, 1, bool>                      mRequireSameY;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>> mPath;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual void tick() /*override*/;

    virtual void stop() /*override*/;

    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual void _moveToBlock() /*override*/;

    virtual ::Vec3 _getTargetPosition() const /*override*/;

    virtual ::std::weak_ptr<::POIInstance> _getOwnedPOI(::POIType type) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _updatePOIBooking();

    MCAPI bool getPOI(::POIType type);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $tick();

    MCAPI void $stop();

    MCAPI bool $isValidTarget(::BlockSource& region, ::BlockPos const& pos);

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI void $_moveToBlock();

    MCAPI ::Vec3 $_getTargetPosition() const;

    MCAPI ::std::weak_ptr<::POIInstance> $_getOwnedPOI(::POIType type) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
