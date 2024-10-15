#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LootTables {
public:
    // prevent constructor by default
    LootTables& operator=(LootTables const&);
    LootTables(LootTables const&);

public:
    // NOLINTBEGIN
    MCAPI LootTables();

    MCAPI class LootTable* lookupByName(std::string const& dir, class ResourcePackManager& resourceLoader);

    MCAPI ~LootTables();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
