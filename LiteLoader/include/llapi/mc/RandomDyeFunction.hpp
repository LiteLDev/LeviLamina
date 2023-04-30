/**
 * @file  RandomDyeFunction.hpp
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
 * @brief MC class RandomDyeFunction.
 *
 */
class RandomDyeFunction : public LootItemFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMDYEFUNCTION
public:
    class RandomDyeFunction& operator=(class RandomDyeFunction const &) = delete;
    RandomDyeFunction(class RandomDyeFunction const &) = delete;
    RandomDyeFunction() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?apply\@RandomDyeFunction\@\@UEAAXAEAVItemStack\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemStack &, class Random &, class LootTableContext &);
    /**
     * @vftbl 3
     * @symbol ?apply\@RandomDyeFunction\@\@UEAAXAEAVItemInstance\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemInstance &, class Random &, class LootTableContext &);

//private:
    /**
     * @symbol ?_applyBase\@RandomDyeFunction\@\@AEBAXAEAVItemStackBase\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void _applyBase(class ItemStackBase &, class Random &) const;
    /**
     * @symbol ?_getRandomArmorColor\@RandomDyeFunction\@\@AEBA?AVColor\@mce\@\@AEAVRandom\@\@\@Z
     */
    MCAPI class mce::Color _getRandomArmorColor(class Random &) const;
    /**
     * @symbol ?_getRandomDyeColor\@RandomDyeFunction\@\@AEBA?AVColor\@mce\@\@AEAVRandom\@\@\@Z
     */
    MCAPI class mce::Color _getRandomDyeColor(class Random &) const;

private:

};
