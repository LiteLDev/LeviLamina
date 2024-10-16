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
    // vIndex: 0
    virtual ~LootItemActorHasVariantCondition() = default;

    // vIndex: 1
    virtual bool applies(class Random& random, class LootTableContext& context);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool applies$(class Random& random, class LootTableContext& context);

    // NOLINTEND
};
