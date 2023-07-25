#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LootItemActorHasVariantCondition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMACTORHASVARIANTCONDITION
public:
    LootItemActorHasVariantCondition& operator=(LootItemActorHasVariantCondition const&) = delete;
    LootItemActorHasVariantCondition(LootItemActorHasVariantCondition const&)            = delete;
    LootItemActorHasVariantCondition()                                                   = delete;
#endif

public:
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
};
