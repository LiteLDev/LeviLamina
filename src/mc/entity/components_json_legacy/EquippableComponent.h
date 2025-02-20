#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class ItemStack;
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
    MCAPI ::std::unique_ptr<::CompoundTag> createTag(::Actor& owner) const;

    MCAPI bool onItemChanged(::Actor& owner, uint64 slotIdx, ::ItemStack const& item) const;

    MCAPI ::EquippableComponent& operator=(::EquippableComponent&& other);
    // NOLINTEND
};
