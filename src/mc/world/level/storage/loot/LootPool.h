#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/RandomValueBounds.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class LootItemCondition;
class LootPoolEntry;
class LootPoolTiers;
class LootTableContext;
class Random;
class SemVersion;
namespace Json { class Value; }
// clang-format on

class LootPool {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::LootPoolEntry>>>     mEntries;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::LootItemCondition>>> mConditions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LootPoolTiers>>                     mTiers;
    ::ll::TypedStorage<4, 8, ::RandomValueBounds>                                    mRolls;
    ::ll::TypedStorage<4, 8, ::RandomValueBounds>                                    mBonusRolls;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addRandomItems(::std::vector<::ItemStack>& result, ::Random& random, ::LootTableContext& context);

#ifdef LL_PLAT_C
    MCAPI void deserialize(
        ::Json::Value const& pool,
        bool                 usingUpcomingCreatorFeaturesExperiment,
        ::SemVersion const&  jsonVersion
    );
#endif

    MCAPI ~LootPool();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
