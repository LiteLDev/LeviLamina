#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/BaseMoveToGoal.h"
#include "mc/world/actor/ai/village/POIType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Mob;
class POIInstance;
class Vec3;
// clang-format on

class MoveToPOIGoal : public ::BaseMoveToGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkc426aa;
    ::ll::UntypedStorage<4, 24> mUnk49f40a;
    ::ll::UntypedStorage<1, 1>  mUnk926af8;
    ::ll::UntypedStorage<1, 1>  mUnk943b49;
    ::ll::UntypedStorage<8, 8>  mUnk45e98b;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveToPOIGoal& operator=(MoveToPOIGoal const&);
    MoveToPOIGoal(MoveToPOIGoal const&);
    MoveToPOIGoal();

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
    MCAPI MoveToPOIGoal(::Mob& mob, float speedModifier, ::POIType poiType, float coolddownTimeout);

    MCAPI bool _canReachPOI(::Vec3 const& pos, float radiusSqr, bool usingBoundingBox);

    MCAPI void _updatePOIBooking();

    MCAPI bool getPOI(::POIType type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob, float speedModifier, ::POIType poiType, float coolddownTimeout);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
