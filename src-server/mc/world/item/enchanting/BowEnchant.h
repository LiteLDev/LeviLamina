#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class BowEnchant : public ::Enchant {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual int getMinCost(int level) const /*override*/;

    // vIndex: 3
    virtual int getMaxCost(int level) const /*override*/;

    // vIndex: 5
    virtual int getMaxLevel() const /*override*/;

    // vIndex: 16
    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type type) const /*override*/;

    // vIndex: 0
    virtual ~BowEnchant() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::Enchant::Type> const& VALID_ENCHANTMENTS();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getMinCost(int level) const;

    MCAPI int $getMaxCost(int level) const;

    MCAPI int $getMaxLevel() const;

    MCAPI bool $_isValidEnchantmentTypeForCategory(::Enchant::Type type) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
