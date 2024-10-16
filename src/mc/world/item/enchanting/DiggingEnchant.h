#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class DiggingEnchant : public ::Enchant {
public:
    // prevent constructor by default
    DiggingEnchant& operator=(DiggingEnchant const&);
    DiggingEnchant(DiggingEnchant const&);
    DiggingEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DiggingEnchant() = default;

    // vIndex: 2
    virtual int getMinCost(int level) const;

    // vIndex: 3
    virtual int getMaxCost(int level) const;

    // vIndex: 5
    virtual int getMaxLevel() const;

    // vIndex: 16
    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type type) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool _isValidEnchantmentTypeForCategory$(::Enchant::Type type) const;

    MCAPI int getMaxCost$(int level) const;

    MCAPI int getMaxLevel$() const;

    MCAPI int getMinCost$(int level) const;

    MCAPI static std::vector<::Enchant::Type> const& VALID_ENCHANTMENTS();

    // NOLINTEND
};
