#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Container;
class ItemStack;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class LootTable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf60c26;
    ::ll::UntypedStorage<8, 24> mUnkcc1980;
    // NOLINTEND

public:
    // prevent constructor by default
    LootTable& operator=(LootTable const&);
    LootTable(LootTable const&);
    LootTable();

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
