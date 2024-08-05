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
    MCAPI EquippableComponent(class EquippableComponent&& other);

    MCAPI class UpdateEquipPacket createDataPacket(class Actor& owner, ::ContainerID containerID) const;

    MCAPI std::unique_ptr<class CompoundTag> createTag(class Actor& owner) const;

    MCAPI int getSlotCount() const;

    MCAPI bool hasSlotAllowedItems(int slotNumber) const;

    MCAPI bool onItemChanged(class Actor& owner, uint64 slotIdx, class ItemStack const& item) const;

    MCAPI class EquippableComponent& operator=(class EquippableComponent&& other);

    MCAPI std::vector<class ItemDescriptor> const* tryGetSlotAllowedItems(int slotNumber) const;

    MCAPI ~EquippableComponent();

    // NOLINTEND
};
