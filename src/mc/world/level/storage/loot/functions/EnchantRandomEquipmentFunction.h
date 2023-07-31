#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

class EnchantRandomEquipmentFunction : public ::LootItemFunction {

public:
    // prevent constructor by default
    EnchantRandomEquipmentFunction& operator=(EnchantRandomEquipmentFunction const&) = delete;
    EnchantRandomEquipmentFunction(EnchantRandomEquipmentFunction const&)            = delete;
    EnchantRandomEquipmentFunction()                                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?apply\@EnchantRandomEquipmentFunction\@\@UEAAXAEAVItemStack\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&);
    /**
     * @vftbl 3
     * @symbol
     * ?apply\@EnchantRandomEquipmentFunction\@\@UEAAXAEAVItemInstance\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);
    // NOLINTEND
};
