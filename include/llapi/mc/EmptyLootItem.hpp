/**
 * @file  EmptyLootItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EmptyLootItem.
 *
 */
class EmptyLootItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EMPTYLOOTITEM
public:
    class EmptyLootItem& operator=(class EmptyLootItem const &) = delete;
    EmptyLootItem(class EmptyLootItem const &) = delete;
    EmptyLootItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  ?_createItem\@EmptyLootItem\@\@MEAA_NAEAV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool _createItem(std::vector<class ItemStack> &, class Random &, class LootTableContext &);

};