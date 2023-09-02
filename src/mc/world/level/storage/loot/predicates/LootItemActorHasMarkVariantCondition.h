#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

class LootItemActorHasMarkVariantCondition : public ::LootItemCondition {
public:
    // prevent constructor by default
    LootItemActorHasMarkVariantCondition& operator=(LootItemActorHasMarkVariantCondition const&) = delete;
    LootItemActorHasMarkVariantCondition(LootItemActorHasMarkVariantCondition const&)            = delete;
    LootItemActorHasMarkVariantCondition()                                                       = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?applies@LootItemActorHasMarkVariantCondition@@UEAA_NAEAVRandom@@AEAVLootTableContext@@@Z
    virtual bool applies(class Random&, class LootTableContext&);

    // NOLINTEND
};
