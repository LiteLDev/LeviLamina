#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

class LootItemActorHasVariantCondition : public ::LootItemCondition {

public:
    // prevent constructor by default
    LootItemActorHasVariantCondition& operator=(LootItemActorHasVariantCondition const&) = delete;
    LootItemActorHasVariantCondition(LootItemActorHasVariantCondition const&)            = delete;
    LootItemActorHasVariantCondition()                                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?applies\@LootItemActorHasVariantCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random&, class LootTableContext&);
    // NOLINTEND
};
