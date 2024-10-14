#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class EnchantmentInstance {
public:
    // prevent constructor by default
    EnchantmentInstance& operator=(EnchantmentInstance const&);
    EnchantmentInstance(EnchantmentInstance const&);

public:
    // NOLINTBEGIN
    MCAPI EnchantmentInstance();

    MCAPI EnchantmentInstance(::Enchant::Type enchantType, int level);

    MCAPI int getEnchantLevel() const;

    MCAPI ::Enchant::Type getEnchantType() const;

    MCAPI bool operator==(class EnchantmentInstance const& rhs) const;

    MCAPI void setEnchantLevel(int level);

    MCAPI void setEnchantType(::Enchant::Type enchantType);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
