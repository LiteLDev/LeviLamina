#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class ItemActor;
class ItemDescriptor;
class ItemStack;
class Mob;
class WeakEntityRef;
struct DistanceSortedActor;
struct Shareable;
// clang-format on

class PickupItemsGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkc13171;
    ::ll::UntypedStorage<4, 12> mUnkdf0376;
    ::ll::UntypedStorage<8, 8>  mUnk964019;
    ::ll::UntypedStorage<4, 4>  mUnk856f2f;
    ::ll::UntypedStorage<4, 4>  mUnkdfe959;
    ::ll::UntypedStorage<4, 4>  mUnk60523b;
    ::ll::UntypedStorage<1, 1>  mUnkcce7ee;
    ::ll::UntypedStorage<8, 8>  mUnk38d569;
    ::ll::UntypedStorage<4, 4>  mUnk21c42a;
    ::ll::UntypedStorage<4, 4>  mUnke45fd0;
    ::ll::UntypedStorage<4, 4>  mUnk8f5ecd;
    ::ll::UntypedStorage<1, 1>  mUnk405a73;
    ::ll::UntypedStorage<1, 1>  mUnk103933;
    ::ll::UntypedStorage<4, 4>  mUnkc5272c;
    ::ll::UntypedStorage<1, 1>  mUnka95469;
    ::ll::UntypedStorage<1, 1>  mUnk6031c2;
    ::ll::UntypedStorage<8, 24> mUnkdaddd5;
    ::ll::UntypedStorage<8, 24> mUnkabc376;
    // NOLINTEND

public:
    // prevent constructor by default
    PickupItemsGoal& operator=(PickupItemsGoal const&);
    PickupItemsGoal(PickupItemsGoal const&);
    PickupItemsGoal();

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
    virtual ~PickupItemsGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PickupItemsGoal(
        ::Mob&                                 mob,
        float                                  speedModifier,
        bool                                   trackTarget,
        int                                    searchRange,
        int                                    searchHeight,
        float                                  goalRadius,
        bool                                   pickupBasedOnChance,
        bool                                   canPickupAnyItem,
        int                                    timeoutAfterBeingAttacked,
        bool                                   canPickupToHandOrEquipment,
        bool                                   pickupSameItemsAsInHand,
        ::std::vector<::ItemDescriptor> const& excludedItemsList
    );

    MCAPI ::std::vector<::WeakEntityRef> _filterValidTargets(::std::vector<::DistanceSortedActor> const& entities
    ) const;

    MCAPI ::Shareable const* _getShareableItem(::ItemStack const& item) const;

    MCAPI void _pickItemUp(::ItemActor* itemActor);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob&                                 mob,
        float                                  speedModifier,
        bool                                   trackTarget,
        int                                    searchRange,
        int                                    searchHeight,
        float                                  goalRadius,
        bool                                   pickupBasedOnChance,
        bool                                   canPickupAnyItem,
        int                                    timeoutAfterBeingAttacked,
        bool                                   canPickupToHandOrEquipment,
        bool                                   pickupSameItemsAsInHand,
        ::std::vector<::ItemDescriptor> const& excludedItemsList
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
