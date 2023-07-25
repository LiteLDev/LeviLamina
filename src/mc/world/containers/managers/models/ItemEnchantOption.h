#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemEnchantOption {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMENCHANTOPTION
public:
    ItemEnchantOption(ItemEnchantOption const&) = delete;
    ItemEnchantOption()                         = delete;
#endif

public:
    /**
     * @symbol ??0ItemEnchantOption\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI ItemEnchantOption(class ItemEnchantOption&&);
    /**
     * @symbol ??4ItemEnchantOption\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ItemEnchantOption& operator=(class ItemEnchantOption const&);
    /**
     * @symbol ??1ItemEnchantOption\@\@QEAA\@XZ
     */
    MCAPI ~ItemEnchantOption();
};
