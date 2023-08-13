#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

class EnchantWithLevelsFunction : public ::LootItemFunction {

public:
    // prevent constructor by default
    EnchantWithLevelsFunction& operator=(EnchantWithLevelsFunction const&) = delete;
    EnchantWithLevelsFunction(EnchantWithLevelsFunction const&)            = delete;
    EnchantWithLevelsFunction()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?apply\@EnchantWithLevelsFunction\@\@UEAAXAEAVItemStack\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&);
    /**
     * @vftbl 2
     * @symbol
     * ?apply\@EnchantWithLevelsFunction\@\@UEAAHAEAVItemStack\@\@AEAVRandom\@\@AEBUTrade\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual int apply(class ItemStack&, class Random&, struct Trade const&, class LootTableContext&);
    /**
     * @vftbl 3
     * @symbol ?apply\@EnchantWithLevelsFunction\@\@UEAAXAEAVItemInstance\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);
    /**
     * @vftbl 4
     * @symbol
     * ?apply\@EnchantWithLevelsFunction\@\@UEAAHAEAVItemInstance\@\@AEAVRandom\@\@AEBUTrade\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual int apply(class ItemInstance&, class Random&, struct Trade const&, class LootTableContext&);
    // NOLINTEND
};
