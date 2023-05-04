/**
 * @file  LootItemActorHasVariantCondition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LootItemActorHasVariantCondition.
 *
 */
class LootItemActorHasVariantCondition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMACTORHASVARIANTCONDITION
public:
    class LootItemActorHasVariantCondition& operator=(class LootItemActorHasVariantCondition const &) = delete;
    LootItemActorHasVariantCondition(class LootItemActorHasVariantCondition const &) = delete;
    LootItemActorHasVariantCondition() = delete;
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
    virtual bool applies(class Random &, class LootTableContext &);

};
