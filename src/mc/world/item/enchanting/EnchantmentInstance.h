#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class EnchantmentInstance {
public:
    // prevent constructor by default
    EnchantmentInstance& operator=(EnchantmentInstance const&);
    EnchantmentInstance(EnchantmentInstance const&);
    EnchantmentInstance();

public:
    // NOLINTBEGIN
    // symbol: ??0EnchantmentInstance@@QEAA@W4Type@Enchant@@H@Z
    MCAPI EnchantmentInstance(::Enchant::Type enchantType, int level);

    // symbol: ?getEnchantLevel@EnchantmentInstance@@QEBAHXZ
    MCAPI int getEnchantLevel() const;

    // symbol: ?getEnchantType@EnchantmentInstance@@QEBA?AW4Type@Enchant@@XZ
    MCAPI ::Enchant::Type getEnchantType() const;

    // NOLINTEND
};
