#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LootItemFunction;
namespace Json { class Value; }
// clang-format on

class LootItemFunctions {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::std::vector<::std::unique_ptr<::LootItemFunction>>
    deserialize(::Json::Value object, bool usingUpcomingCreatorFeaturesExperiment);
#endif
    // NOLINTEND
};
