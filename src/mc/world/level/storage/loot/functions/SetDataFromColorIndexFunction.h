#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

class SetDataFromColorIndexFunction : public ::LootItemFunction {

public:
    // prevent constructor by default
    SetDataFromColorIndexFunction& operator=(SetDataFromColorIndexFunction const&) = delete;
    SetDataFromColorIndexFunction(SetDataFromColorIndexFunction const&)            = delete;
    SetDataFromColorIndexFunction()                                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?apply\@SetDataFromColorIndexFunction\@\@UEAAXAEAVItemStack\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&); // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?apply\@SetDataFromColorIndexFunction\@\@UEAAXAEAVItemInstance\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_applyImpl\@SetDataFromColorIndexFunction\@\@AEAA_NAEAPEBVItem\@\@PEBVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAH\@Z
     */
    MCAPI bool _applyImpl(class Item const*&, class Actor const*, std::string const&, int&); // NOLINT

private:
};
