#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

class IPlayerContainerSetter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPlayerContainerSetter() = default;

    virtual void setArmor(int slot, ::ItemStack const& item) = 0;

    virtual void setOffhandSlot(::ItemStack const& item) = 0;

    virtual void setPlayerUIItem(int slot, ::ItemStack const& item) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
