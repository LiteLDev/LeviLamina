#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LootItemCondition;
namespace Json { class Value; }
// clang-format on

class LootItemConditions {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::std::unique_ptr<::LootItemCondition>>
    deserialize(::Json::Value object, bool usingUpcomingCreatorFeaturesExperiment);
    // NOLINTEND
};
