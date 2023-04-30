/**
 * @file  EnchantRandomEquipmentFunction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "LootItemFunction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnchantRandomEquipmentFunction.
 *
 */
class EnchantRandomEquipmentFunction : public LootItemFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTRANDOMEQUIPMENTFUNCTION
public:
    class EnchantRandomEquipmentFunction& operator=(class EnchantRandomEquipmentFunction const &) = delete;
    EnchantRandomEquipmentFunction(class EnchantRandomEquipmentFunction const &) = delete;
    EnchantRandomEquipmentFunction() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?apply\@EnchantRandomEquipmentFunction\@\@UEAAXAEAVItemStack\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemStack &, class Random &, class LootTableContext &);
    /**
     * @vftbl 3
     * @symbol ?apply\@EnchantRandomEquipmentFunction\@\@UEAAXAEAVItemInstance\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemInstance &, class Random &, class LootTableContext &);

};
