#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Container;
class LootPool;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class LootTable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                mDir;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::LootPool>>> mPools;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void deserialize(::Json::Value const& table, bool usingUpcomingCreatorFeaturesExperiment);

    MCAPI void fill(::Container& container, ::Random& random, ::LootTableContext& context);

    MCFOLD ::std::string getDir() const;
    // NOLINTEND
};
