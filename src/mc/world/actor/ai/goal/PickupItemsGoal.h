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
    // vIndex: 0, symbol: __gen_??1PickupItemsGoal@@UEAA@XZ
    virtual ~PickupItemsGoal() = default;

    // vIndex: 1, symbol: ?canUse@PickupItemsGoal@@UEAA_NXZ
    virtual bool canUse();

    // vIndex: 2, symbol: ?canContinueToUse@PickupItemsGoal@@UEAA_NXZ
    virtual bool canContinueToUse();

    // vIndex: 4, symbol: ?start@PickupItemsGoal@@UEAAXXZ
    virtual void start();

    // vIndex: 5, symbol: ?stop@PickupItemsGoal@@UEAAXXZ
    virtual void stop();

    // vIndex: 6, symbol: ?tick@PickupItemsGoal@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol:
    // ?appendDebugInfo@PickupItemsGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void appendDebugInfo(std::string& str) const;

    // symbol:
    // ??0PickupItemsGoal@@QEAA@AEAVMob@@M_NHHM11H11AEBV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@@Z
    MCAPI
    PickupItemsGoal(class Mob& mob, float speedModifier, bool trackTarget, int searchRange, int searchHeight, float goalRadius, bool, bool canPickupAnyItem, int, bool canPickupToHandOrEquipment, bool, std::vector<class ItemDescriptor> const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_dropItem@PickupItemsGoal@@AEBAXAEBVItemStack@@@Z
    MCAPI void _dropItem(class ItemStack const& item) const;

    // symbol:
    // ?_filterValidTargets@PickupItemsGoal@@AEBA?AV?$vector@VWeakEntityRef@@V?$allocator@VWeakEntityRef@@@std@@@std@@AEBV?$vector@UDistanceSortedActor@@V?$allocator@UDistanceSortedActor@@@std@@@3@@Z
    MCAPI std::vector<class WeakEntityRef> _filterValidTargets(std::vector<struct DistanceSortedActor> const& entities
    ) const;

    // symbol: ?_getShareableItem@PickupItemsGoal@@AEBAPEBUShareable@@AEBVItemStack@@@Z
    MCAPI struct Shareable const* _getShareableItem(class ItemStack const& item) const;

    // symbol: ?_hasRoomForCarriedItem@PickupItemsGoal@@AEBA_NXZ
    MCAPI bool _hasRoomForCarriedItem() const;

    // symbol: ?_pickItemUp@PickupItemsGoal@@AEAAXPEAVItemActor@@@Z
    MCAPI void _pickItemUp(class ItemActor* itemActor);

    // NOLINTEND
};
