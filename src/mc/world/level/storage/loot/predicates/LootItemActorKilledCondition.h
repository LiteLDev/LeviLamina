#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootItemActorKilledCondition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMACTORKILLEDCONDITION
public:
    LootItemActorKilledCondition& operator=(LootItemActorKilledCondition const&) = delete;
    LootItemActorKilledCondition(LootItemActorKilledCondition const&)            = delete;
    LootItemActorKilledCondition()                                               = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?applies\@LootItemActorKilledCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random&, class LootTableContext&);
    /**
     * @symbol
     * ?deserialize\@LootItemActorKilledCondition\@\@SA?AV?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@VValue\@Json\@\@\@Z
     */
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value);
};
