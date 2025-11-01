#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemStack;
class LootPool;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class LootTable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mDir;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::LootPool>>> mPools;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void deserialize(::Json::Value const& table, bool usingUpcomingCreatorFeaturesExperiment);

    MCAPI void fill(::Container& container, ::Random& random, ::LootTableContext& context);

    MCAPI ::std::vector<int> getAvailableSlots(::Container& container, ::Random& random);

    MCAPI ::std::vector<::ItemStack> getRandomItems(::Random& random, ::LootTableContext& context) const;

    MCAPI void shuffleAndSplitItems(::std::vector<::ItemStack>& result, int availableSlots, ::Random& random);
    // NOLINTEND

};
