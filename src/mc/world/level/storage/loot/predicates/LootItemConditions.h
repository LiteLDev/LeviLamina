#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LootItemCondition;
class LootTableContext;
class Random;
namespace Json { class Value; }
// clang-format on

class LootItemConditions {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool allApply(
        ::std::vector<::std::unique_ptr<::LootItemCondition>> const& predicates,
        ::Random&                                                    random,
        ::LootTableContext&                                          context
    );

    MCNAPI static ::std::vector<::std::unique_ptr<::LootItemCondition>>
    deserialize(::Json::Value object, bool usingUpcomingCreatorFeaturesExperiment);
    // NOLINTEND
};
