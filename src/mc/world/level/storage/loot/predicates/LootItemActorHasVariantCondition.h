#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

class LootItemActorHasVariantCondition : public ::LootItemCondition {
public:
    // prevent constructor by default
    LootItemActorHasVariantCondition& operator=(LootItemActorHasVariantCondition const&);
    LootItemActorHasVariantCondition(LootItemActorHasVariantCondition const&);
    LootItemActorHasVariantCondition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~LootItemActorHasVariantCondition() = default;

    // vIndex: 1, symbol: ?applies@LootItemActorHasVariantCondition@@UEAA_NAEAVRandom@@AEAVLootTableContext@@@Z
    virtual bool applies(class Random&, class LootTableContext&);

    // NOLINTEND
};
