/**
 * @file  LootTables.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LootTables.
 *
 */
class LootTables {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTTABLES
public:
    class LootTables& operator=(class LootTables const &) = delete;
    LootTables(class LootTables const &) = delete;
    LootTables() = delete;
#endif

public:
    /**
     * @symbol  ?lookupByName\@LootTables\@\@QEAAPEAVLootTable\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVResourcePackManager\@\@\@Z
     */
    MCAPI class LootTable * lookupByName(std::string const &, class ResourcePackManager &);
    /**
     * @symbol  ??1LootTables\@\@QEAA\@XZ
     */
    MCAPI ~LootTables();

};