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
class Mob;
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
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 11
    virtual bool isValidTarget(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 14
    virtual void _moveToBlock() /*override*/;

    // vIndex: 15
    virtual ::Vec3 _getTargetPosition() const /*override*/;

    // vIndex: 17
    virtual ::std::weak_ptr<::POIInstance> _getOwnedPOI(::POIType type) const;

    // vIndex: 0
    virtual ~MoveToPOIGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MoveToPOIGoal(::Mob& mob, float speedModifier, ::POIType poiType, float coolddownTimeout);

    MCNAPI bool _canReachPOI(::Vec3 const& pos, float radiusSqr, bool usingBoundingBox);

    MCNAPI void _updatePOIBooking();

    MCNAPI bool getPOI(::POIType type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob& mob, float speedModifier, ::POIType poiType, float coolddownTimeout);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI void $tick();

    MCNAPI void $stop();

    MCNAPI bool $isValidTarget(::BlockSource& region, ::BlockPos const& pos);

    MCNAPI void $appendDebugInfo(::std::string& str) const;

    MCNAPI void $_moveToBlock();

    MCNAPI ::Vec3 $_getTargetPosition() const;

    MCNAPI ::std::weak_ptr<::POIInstance> $_getOwnedPOI(::POIType type) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
