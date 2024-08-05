#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootItemConditions {
public:
    // prevent constructor by default
    LootItemConditions& operator=(LootItemConditions const&);
    LootItemConditions(LootItemConditions const&);
    LootItemConditions();

public:
    // NOLINTBEGIN
    MCAPI static bool allApply(
        std::vector<std::unique_ptr<class LootItemCondition>> const& predicates,
        class Random&                                                random,
        class LootTableContext&                                      context
    );

    MCAPI static std::vector<std::unique_ptr<class LootItemCondition>> deserialize(class Json::Value object);

    // NOLINTEND
};
