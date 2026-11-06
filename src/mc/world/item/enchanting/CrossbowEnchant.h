#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class CrossbowEnchant : public ::Enchant {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getMinCost(int level) const /*override*/;

    virtual int getMaxCost(int level) const /*override*/;

    virtual int getMaxLevel() const /*override*/;

    virtual bool isCompatibleWith(::Enchant::Type type) const /*override*/;

    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type type) const /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::Enchant::Type> const& VALID_ENCHANTMENTS();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getMinCost(int level) const;

    MCNAPI int $getMaxCost(int level) const;

    MCAPI int $getMaxLevel() const;

    MCNAPI bool $isCompatibleWith(::Enchant::Type type) const;

    MCNAPI bool $_isValidEnchantmentTypeForCategory(::Enchant::Type type) const;


    // NOLINTEND
};
