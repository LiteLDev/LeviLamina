/**
 * @file  SetDataFromColorIndexFunction.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "LootItemFunction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SetDataFromColorIndexFunction.
 *
 */
class SetDataFromColorIndexFunction : public LootItemFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETDATAFROMCOLORINDEXFUNCTION
public:
    class SetDataFromColorIndexFunction& operator=(class SetDataFromColorIndexFunction const &) = delete;
    SetDataFromColorIndexFunction(class SetDataFromColorIndexFunction const &) = delete;
    SetDataFromColorIndexFunction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1627939317
     */
    virtual ~SetDataFromColorIndexFunction();
    /**
     * @vftbl  1
     * @symbol ?apply@SetDataFromColorIndexFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
     * @hash   1607817929
     */
    virtual void apply(class ItemStack &, class Random &, class LootTableContext &);
    /**
     * @vftbl  3
     * @symbol ?apply@SetDataFromColorIndexFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
     * @hash   -369946210
     */
    virtual void apply(class ItemInstance &, class Random &, class LootTableContext &);

};