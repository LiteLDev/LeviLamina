/**
 * @file  LootTable.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LootTable.
 *
 */
class LootTable {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTTABLE
public:
    class LootTable& operator=(class LootTable const &) = delete;
    LootTable(class LootTable const &) = delete;
    LootTable() = delete;
#endif

public:
    /**
     * @hash   -952118629
     * @symbol ??0LootTable@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI LootTable(std::string);
    /**
     * @hash   2048053590
     * @symbol ?deserialize@LootTable@@QEAAXAEBVValue@Json@@@Z
     */
    MCAPI void deserialize(class Json::Value const &);
    /**
     * @hash   560636218
     * @symbol ?fill@LootTable@@QEAAXAEAVContainer@@AEAVRandom@@AEAVLootTableContext@@@Z
     */
    MCAPI void fill(class Container &, class Random &, class LootTableContext &);
    /**
     * @hash   -2081166090
     * @symbol ?getRandomItems@LootTable@@QEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEAVRandom@@AEAVLootTableContext@@@Z
     */
    MCAPI std::vector<class ItemStack> getRandomItems(class Random &, class LootTableContext &) const;

//private:
    /**
     * @hash   -1633904513
     * @symbol ?getAvailableSlots@LootTable@@AEAA?AV?$vector@HV?$allocator@H@std@@@std@@AEAVContainer@@AEAVRandom@@@Z
     */
    MCAPI std::vector<int> getAvailableSlots(class Container &, class Random &);
    /**
     * @hash   373497056
     * @symbol ?shuffleAndSplitItems@LootTable@@AEAAXAEAV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@HAEAVRandom@@@Z
     */
    MCAPI void shuffleAndSplitItems(std::vector<class ItemStack> &, int, class Random &);

private:

};