#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootItemCondition {
public:
    // prevent constructor by default
    LootItemCondition& operator=(LootItemCondition const&);
    LootItemCondition(LootItemCondition const&);
    LootItemCondition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1LootItemCondition@@UEAA@XZ
    virtual ~LootItemCondition();

    // vIndex: 1, symbol: ?applies@LootItemActorHasMarkVariantCondition@@UEAA_NAEAVRandom@@AEAVLootTableContext@@@Z
    virtual bool applies(class Random& random, class LootTableContext& context) = 0;

    // symbol:
    // ?deserialize@LootItemCondition@@SA?AV?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@VValue@Json@@@Z
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value object);

    // NOLINTEND
};
