#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LootItemActorHasMarkVariantCondition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMACTORHASMARKVARIANTCONDITION
public:
    LootItemActorHasMarkVariantCondition& operator=(LootItemActorHasMarkVariantCondition const&) = delete;
    LootItemActorHasMarkVariantCondition(LootItemActorHasMarkVariantCondition const&)            = delete;
    LootItemActorHasMarkVariantCondition()                                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?applies\@LootItemActorHasMarkVariantCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random&, class LootTableContext&);
};
