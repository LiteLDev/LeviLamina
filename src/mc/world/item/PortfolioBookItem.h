#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Player;
// clang-format on

class PortfolioBookItem : public ::Item {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ItemStack& use(::ItemStack& item, ::Player& player) const /*override*/;

    virtual ~PortfolioBookItem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
