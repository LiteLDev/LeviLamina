#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

class LootingEnchantFunction : public ::LootItemFunction {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTINGENCHANTFUNCTION
public:
    LootingEnchantFunction& operator=(LootingEnchantFunction const&) = delete;
    LootingEnchantFunction(LootingEnchantFunction const&)            = delete;
    LootingEnchantFunction()                                         = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?apply\@LootingEnchantFunction\@\@UEAAXAEAVItemStack\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&);
    /**
     * @vftbl 3
     * @symbol ?apply\@LootingEnchantFunction\@\@UEAAXAEAVItemInstance\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);
};
