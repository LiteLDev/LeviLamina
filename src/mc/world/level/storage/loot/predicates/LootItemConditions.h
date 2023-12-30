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
    // symbol:
    // ?allApply@LootItemConditions@@SA_NAEBV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@std@@AEAVRandom@@AEAVLootTableContext@@@Z
    MCAPI static bool allApply(
        std::vector<std::unique_ptr<class LootItemCondition>> const& predicates,
        class Random&                                                random,
        class LootTableContext&                                      context
    );

    // symbol:
    // ?deserialize@LootItemConditions@@SA?AV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@std@@VValue@Json@@@Z
    MCAPI static std::vector<std::unique_ptr<class LootItemCondition>> deserialize(class Json::Value object);

    // NOLINTEND
};
