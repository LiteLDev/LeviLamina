#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/ai/goal/Goal.h"

class PickupItemsGoal : public ::Goal {
public:
    // prevent constructor by default
    PickupItemsGoal& operator=(PickupItemsGoal const&);
    PickupItemsGoal(PickupItemsGoal const&);
    PickupItemsGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PickupItemsGoal() = default;

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 2
    virtual bool canContinueToUse();

    // vIndex: 4
    virtual void start();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    MCAPI
    PickupItemsGoal(class Mob& mob, float speedModifier, bool trackTarget, int searchRange, int searchHeight, float goalRadius, bool, bool canPickupAnyItem, int, bool canPickupToHandOrEquipment, bool, std::vector<class ItemDescriptor> const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _dropItem(class ItemStack const& item) const;

    MCAPI std::vector<class WeakEntityRef> _filterValidTargets(std::vector<struct DistanceSortedActor> const& entities
    ) const;

    MCAPI struct Shareable const* _getShareableItem(class ItemStack const& item) const;

    MCAPI bool _hasRoomForCarriedItem() const;

    MCAPI void _pickItemUp(class ItemActor* itemActor);

    // NOLINTEND
};
