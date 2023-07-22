/**
 * @file  RandomDyeFunction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"
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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RandomDyeFunction();
    /**
     * @vftbl  1
     * @symbol  ?apply\@RandomDyeFunction\@\@UEAAXAEAVItemStack\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemStack &, class Random &, class LootTableContext &);
    /**
     * @vftbl  3
     * @symbol  ?apply\@RandomDyeFunction\@\@UEAAXAEAVItemInstance\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual void apply(class ItemInstance &, class Random &, class LootTableContext &);
    /**
     * @symbol  ?deserialize\@RandomDyeFunction\@\@SA?AV?$unique_ptr\@VLootItemFunction\@\@U?$default_delete\@VLootItemFunction\@\@\@std\@\@\@std\@\@VValue\@Json\@\@AEAV?$vector\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>> &);

//private:
    /**
     * @symbol  ?_applyBase\@RandomDyeFunction\@\@AEBAXAEAVItemStackBase\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void _applyBase(class ItemStackBase &, class Random &) const;
    /**
     * @symbol  ?_getRandomArmorColor\@RandomDyeFunction\@\@AEBA?AVColor\@mce\@\@AEAVRandom\@\@\@Z
     */
    MCAPI class mce::Color _getRandomArmorColor(class Random &) const;
    /**
     * @symbol  ?_getRandomDyeColor\@RandomDyeFunction\@\@AEBA?AVColor\@mce\@\@AEAVRandom\@\@\@Z
     */
    MCAPI class mce::Color _getRandomDyeColor(class Random &) const;

private:

};