#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class LootPool {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6a364b;
    ::ll::UntypedStorage<8, 24> mUnk2b0680;
    ::ll::UntypedStorage<8, 8> mUnk1243db;
    ::ll::UntypedStorage<4, 8> mUnk2b08f0;
    ::ll::UntypedStorage<4, 8> mUnk734328;
    // NOLINTEND

public:
    // prevent constructor by default
    LootPool& operator=(LootPool const&);
    LootPool(LootPool const&);
    LootPool();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addRandomItem(::std::vector<::ItemStack>& result, ::Random& random, ::LootTableContext& context);

    MCNAPI void addRandomItems(::std::vector<::ItemStack>& result, ::Random& random, ::LootTableContext& context);

    MCNAPI void deserialize(::Json::Value const& pool, bool usingUpcomingCreatorFeaturesExperiment);

    MCNAPI ~LootPool();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
