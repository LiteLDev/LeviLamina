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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
