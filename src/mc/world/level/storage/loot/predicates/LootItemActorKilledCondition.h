#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootItemActorKilledCondition : public ::LootItemCondition {
public:
    // prevent constructor by default
    LootItemActorKilledCondition& operator=(LootItemActorKilledCondition const&);
    LootItemActorKilledCondition(LootItemActorKilledCondition const&);
    LootItemActorKilledCondition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LootItemActorKilledCondition@@UEAA@XZ
    virtual ~LootItemActorKilledCondition() = default;

    // vIndex: 1, symbol: ?applies@LootItemActorKilledCondition@@UEAA_NAEAVRandom@@AEAVLootTableContext@@@Z
    virtual bool applies(class Random& random, class LootTableContext& context);

    // symbol:
    // ?deserialize@LootItemActorKilledCondition@@SA?AV?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@VValue@Json@@@Z
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value object);

    // NOLINTEND
};
