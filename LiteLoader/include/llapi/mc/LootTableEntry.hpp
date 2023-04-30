/**
 * @file  LootTableEntry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LootTableEntry.
 *
 */
class LootTableEntry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTTABLEENTRY
public:
    class LootTableEntry& operator=(class LootTableEntry const &) = delete;
    LootTableEntry(class LootTableEntry const &) = delete;
    LootTableEntry() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?_createItem\@LootTableEntry\@\@MEAA_NAEAV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool _createItem(std::vector<class ItemStack> &, class Random &, class LootTableContext &);

};
