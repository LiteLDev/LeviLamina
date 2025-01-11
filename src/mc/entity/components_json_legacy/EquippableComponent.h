#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class ItemDescriptor;
class ItemStack;
class UpdateEquipPacket;
// clang-format on

class EquippableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkca0284;
    // NOLINTEND

public:
    // prevent constructor by default
    EquippableComponent& operator=(EquippableComponent const&);
    EquippableComponent(EquippableComponent const&);
    EquippableComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EquippableComponent(::EquippableComponent&& other);

    MCAPI ::UpdateEquipPacket createDataPacket(::Actor& owner, ::ContainerID containerID) const;

    MCAPI ::std::unique_ptr<::CompoundTag> createTag(::Actor& owner) const;

    MCFOLD int getSlotCount() const;

    MCAPI bool hasSlotAllowedItems(int slotNumber) const;

    MCAPI bool onItemChanged(::Actor& owner, uint64 slotIdx, ::ItemStack const& item) const;

    MCAPI ::EquippableComponent& operator=(::EquippableComponent&& other);

    MCAPI ::std::vector<::ItemDescriptor> const* tryGetSlotAllowedItems(int slotNumber) const;

    MCAPI ~EquippableComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::EquippableComponent&& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
