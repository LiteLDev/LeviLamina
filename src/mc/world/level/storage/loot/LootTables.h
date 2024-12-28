#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LootTable;
class ResourcePackManager;
// clang-format on

class LootTables {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk776eca;
    ::ll::UntypedStorage<8, 80> mUnk2392d5;
    // NOLINTEND

public:
    // prevent constructor by default
    LootTables& operator=(LootTables const&);
    LootTables(LootTables const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LootTables();

    MCAPI ::LootTable* lookupByName(::std::string const& dir, ::ResourcePackManager& resourceLoader);

    MCAPI ~LootTables();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
