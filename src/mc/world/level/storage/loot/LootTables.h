#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LootTables {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTTABLES
public:
    LootTables& operator=(LootTables const&) = delete;
    LootTables(LootTables const&)            = delete;
    LootTables()                             = delete;
#endif

public:
    /**
     * @symbol
     * ?lookupByName\@LootTables\@\@QEAAPEAVLootTable\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVResourcePackManager\@\@\@Z
     */
    MCAPI class LootTable* lookupByName(std::string const&, class ResourcePackManager&);
    /**
     * @symbol ??1LootTables\@\@QEAA\@XZ
     */
    MCAPI ~LootTables();
};
