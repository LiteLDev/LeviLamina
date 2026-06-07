#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
class LootTable;
class ResourcePackManager;
// clang-format on

class LootTables {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::LootTable>>> mLootTables;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                         mLootTableMutex;
    ::ll::TypedStorage<1, 1, bool const> mUsingUpcomingCreatorFeaturesExperiment;
    // NOLINTEND

public:
    // prevent constructor by default
    LootTables();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LootTables(bool usingUpcomingCreatorFeaturesExperiment);

    MCAPI ::LootTable* lookupByName(::std::string const& dir, ::ResourcePackManager& resourceLoader);

    MCAPI ~LootTables();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool usingUpcomingCreatorFeaturesExperiment);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
