#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemEnchantOption {
public:
    // prevent constructor by default
    ItemEnchantOption(ItemEnchantOption const&);
    ItemEnchantOption();

public:
    // NOLINTBEGIN
    // symbol: ??0ItemEnchantOption@@QEAA@$$QEAV0@@Z
    MCAPI ItemEnchantOption(class ItemEnchantOption&&);

    // symbol: ??4ItemEnchantOption@@QEAAAEAV0@AEBV0@@Z
    MCAPI class ItemEnchantOption& operator=(class ItemEnchantOption const&);

    // symbol: ??1ItemEnchantOption@@QEAA@XZ
    MCAPI ~ItemEnchantOption();

    // NOLINTEND
};
