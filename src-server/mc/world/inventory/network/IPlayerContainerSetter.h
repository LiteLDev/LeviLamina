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
    // vIndex: 0
    virtual ~IPlayerContainerSetter() = default;

    // vIndex: 1
    virtual void setArmor(int, ::ItemStack const&) = 0;

    // vIndex: 2
    virtual void setOffhandSlot(::ItemStack const&) = 0;

    // vIndex: 3
    virtual void setPlayerUIItem(int, ::ItemStack const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
