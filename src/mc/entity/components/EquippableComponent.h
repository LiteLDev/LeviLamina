#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerID.h"

class EquippableComponent {
public:
    // prevent constructor by default
    EquippableComponent& operator=(EquippableComponent const&);
    EquippableComponent(EquippableComponent const&);
    EquippableComponent();

public:
    // NOLINTBEGIN
    // symbol: ??0EquippableComponent@@QEAA@$$QEAV0@@Z
    MCAPI EquippableComponent(class EquippableComponent&& other);

    // symbol: ?createDataPacket@EquippableComponent@@QEBA?AVUpdateEquipPacket@@AEAVActor@@W4ContainerID@@@Z
    MCAPI class UpdateEquipPacket createDataPacket(class Actor& owner, ::ContainerID containerID) const;

    // symbol:
    // ?createTag@EquippableComponent@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEAVActor@@@Z
    MCAPI std::unique_ptr<class CompoundTag> createTag(class Actor& owner) const;

    // symbol: ?getSlotCount@EquippableComponent@@QEBAHXZ
    MCAPI int getSlotCount() const;

    // symbol: ?hasSlotAllowedItems@EquippableComponent@@QEBA_NH@Z
    MCAPI bool hasSlotAllowedItems(int slotNumber) const;

    // symbol: ?onItemChanged@EquippableComponent@@QEBA_NAEAVActor@@_KAEBVItemStack@@@Z
    MCAPI bool onItemChanged(class Actor& owner, uint64 slotIdx, class ItemStack const& item) const;

    // symbol: ??4EquippableComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class EquippableComponent& operator=(class EquippableComponent&& other);

    // symbol:
    // ?tryGetSlotAllowedItems@EquippableComponent@@QEBAPEBV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@H@Z
    MCAPI std::vector<class ItemDescriptor> const* tryGetSlotAllowedItems(int slotNumber) const;

    // symbol: ??1EquippableComponent@@QEAA@XZ
    MCAPI ~EquippableComponent();

    // NOLINTEND
};
