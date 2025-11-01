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
    ::ll::UntypedStorage<1, 1> mUnk1b74db;
    // NOLINTEND

public:
    // prevent constructor by default
    LootTables& operator=(LootTables const&);
    LootTables(LootTables const&);
    LootTables();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::LootTable* lookupByName(::std::string const& dir, ::ResourcePackManager& resourceLoader);
    // NOLINTEND

};
