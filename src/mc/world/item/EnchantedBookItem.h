#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

class EnchantedBookItem : public ::Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsGlint;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getEnchantSlot() const /*override*/;

    virtual int getEnchantValue() const /*override*/;

    virtual bool isGlint(::ItemStackBase const& stack) const /*override*/;

    virtual ~EnchantedBookItem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getEnchantSlot() const;

    MCFOLD int $getEnchantValue() const;

    MCFOLD bool $isGlint(::ItemStackBase const& stack) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
