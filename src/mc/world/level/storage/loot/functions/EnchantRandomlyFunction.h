#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

class EnchantRandomlyFunction : public ::LootItemFunction {

public:
    // prevent constructor by default
    EnchantRandomlyFunction& operator=(EnchantRandomlyFunction const&) = delete;
    EnchantRandomlyFunction(EnchantRandomlyFunction const&)            = delete;
    EnchantRandomlyFunction()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?apply\@EnchantRandomlyFunction\@\@UEAAXAEAVItemStack\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?apply\@EnchantRandomlyFunction\@\@UEAAXAEAVItemInstance\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&); // NOLINT
};
