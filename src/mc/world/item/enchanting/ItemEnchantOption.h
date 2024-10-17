#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemEnchantOption {
public:
    // prevent constructor by default
    ItemEnchantOption(ItemEnchantOption const&);
    ItemEnchantOption();

public:
    // NOLINTBEGIN
    MCAPI ItemEnchantOption(class ItemEnchantOption&&);

    MCAPI class ItemEnchantOption& operator=(class ItemEnchantOption const&);

    MCAPI ~ItemEnchantOption();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class ItemEnchantOption&&);

    MCAPI void dtor$();

    // NOLINTEND
};
