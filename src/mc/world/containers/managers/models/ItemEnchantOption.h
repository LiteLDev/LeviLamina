#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemEnchantOption {

public:
    // prevent constructor by default
    ItemEnchantOption(ItemEnchantOption const&) = delete;
    ItemEnchantOption()                         = delete;

public:
    /**
     * @symbol ??0ItemEnchantOption\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ItemEnchantOption(class ItemEnchantOption&&); // NOLINT
    /**
     * @symbol ??4ItemEnchantOption\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ItemEnchantOption& operator=(class ItemEnchantOption const&); // NOLINT
    /**
     * @symbol ??1ItemEnchantOption\@\@QEAA\@XZ
     */
    MCAPI ~ItemEnchantOption(); // NOLINT
};
