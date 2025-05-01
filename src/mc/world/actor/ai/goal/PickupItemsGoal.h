#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemActor;
class ItemDescriptor;
class ItemStack;
class Mob;
class Path;
class WeakEntityRef;
struct DistanceSortedActor;
struct Shareable;
// clang-format on

class PickupItemsGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>>                   mTarget;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mTargetPos;
    ::ll::TypedStorage<8, 8, ::Mob&>                                 mMob;
    ::ll::TypedStorage<4, 4, int>                                    mSearchRange;
    ::ll::TypedStorage<4, 4, int>                                    mSearchHeight;
    ::ll::TypedStorage<4, 4, float>                                  mSpeedModifier;
    ::ll::TypedStorage<1, 1, bool>                                   mTrackTarget;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>>              mPath;
    ::ll::TypedStorage<4, 4, int>                                    mRandomStopInterval;
    ::ll::TypedStorage<4, 4, float>                                  mGoalRadiusSq;
    ::ll::TypedStorage<4, 4, int>                                    mTimeToRecalcPath;
    ::ll::TypedStorage<1, 1, bool>                                   mPickupBasedOnChance;
    ::ll::TypedStorage<1, 1, bool>                                   mCanPickupAnyItem;
    ::ll::TypedStorage<4, 4, int>                                    mTimeoutAfterBeingAttacked;
    ::ll::TypedStorage<1, 1, bool>                                   mCanPickupToHandOrEquipment;
    ::ll::TypedStorage<1, 1, bool>                                   mPickupSameItemsAsInHand;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor> const> mExcludedItemsList;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakEntityRef>>        mFilteredPickupTargets;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~PickupItemsGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _dropItem(::ItemStack const& item) const;

    MCNAPI ::std::vector<::WeakEntityRef> _filterValidTargets(::std::vector<::DistanceSortedActor> const& entities
    ) const;

    MCNAPI ::Shareable const* _getShareableItem(::ItemStack const& item) const;

    MCNAPI void _handlePickupItem(::Actor& itemEntity);

    MCNAPI bool _hasRoomForCarriedItem() const;

    MCNAPI bool _isSameItemAsInHand(::ItemStack const& item) const;

    MCNAPI void _pickItemUp(::ItemActor* itemActor);
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

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
