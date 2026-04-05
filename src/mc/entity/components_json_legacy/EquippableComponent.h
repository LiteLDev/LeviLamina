#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class ItemStack;
class UpdateEquipPacket;
struct SlotDescriptor;
// clang-format on

class EquippableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SlotDescriptor>> mSlots;
    // NOLINTEND

public:
    // prevent constructor by default
    EquippableComponent& operator=(EquippableComponent const&);
    EquippableComponent(EquippableComponent const&);
    EquippableComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::CompoundTag> createTag(::Actor& owner) const;

    MCAPI bool onItemChanged(::Actor& owner, uint64 slotIdx, ::ItemStack const& item) const;

    MCAPI ::EquippableComponent& operator=(::EquippableComponent&& other);

#ifdef LL_PLAT_C
    MCAPI void setDataFromPacket(::UpdateEquipPacket const& packet);
#endif
    // NOLINTEND
};
