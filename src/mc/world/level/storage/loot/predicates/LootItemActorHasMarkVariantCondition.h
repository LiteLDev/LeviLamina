#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

class LootItemActorHasMarkVariantCondition : public ::LootItemCondition {
public:
    // prevent constructor by default
    LootItemActorHasMarkVariantCondition& operator=(LootItemActorHasMarkVariantCondition const&);
    LootItemActorHasMarkVariantCondition(LootItemActorHasMarkVariantCondition const&);
    LootItemActorHasMarkVariantCondition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LootItemActorHasMarkVariantCondition() = default;

    // vIndex: 1
    virtual bool applies(class Random& random, class LootTableContext& context);

    // NOLINTEND
};
