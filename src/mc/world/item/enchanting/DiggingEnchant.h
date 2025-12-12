#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class DiggingEnchant : public ::Enchant {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getMinCost(int level) const /*override*/;

    virtual int getMaxCost(int level) const /*override*/;

    virtual int getMaxLevel() const /*override*/;

    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type type) const /*override*/;

    virtual ~DiggingEnchant() /*override*/ = default;
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

    MCFOLD int $getMaxCost(int level) const;

    MCAPI int $getMaxLevel() const;

    MCAPI bool $_isValidEnchantmentTypeForCategory(::Enchant::Type type) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
