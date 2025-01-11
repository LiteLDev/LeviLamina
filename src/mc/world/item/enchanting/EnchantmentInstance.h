#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class EnchantmentInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Enchant::Type> mEnchantType;
    ::ll::TypedStorage<4, 4, int>             mLevel;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EnchantmentInstance();

    MCAPI EnchantmentInstance(::Enchant::Type enchantType, int level);

    MCFOLD int getEnchantLevel() const;

    MCFOLD ::Enchant::Type getEnchantType() const;

    MCFOLD void setEnchantLevel(int level);

    MCFOLD void setEnchantType(::Enchant::Type enchantType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Enchant::Type enchantType, int level);
    // NOLINTEND
};
