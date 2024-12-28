#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class EnchantmentInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk6af375;
    ::ll::UntypedStorage<4, 4> mUnk254140;
    // NOLINTEND

public:
    // prevent constructor by default
    EnchantmentInstance& operator=(EnchantmentInstance const&);
    EnchantmentInstance(EnchantmentInstance const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EnchantmentInstance();

    MCAPI EnchantmentInstance(::Enchant::Type enchantType, int level);

    MCAPI int getEnchantLevel() const;

    MCAPI ::Enchant::Type getEnchantType() const;

    MCAPI void setEnchantLevel(int level);

    MCAPI void setEnchantType(::Enchant::Type enchantType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Enchant::Type enchantType, int level);
    // NOLINTEND
};
