#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootItemKilledByActorCondition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMKILLEDBYACTORCONDITION
public:
    LootItemKilledByActorCondition& operator=(LootItemKilledByActorCondition const&) = delete;
    LootItemKilledByActorCondition(LootItemKilledByActorCondition const&)            = delete;
    LootItemKilledByActorCondition()                                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?applies\@LootItemKilledByActorCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random&, class LootTableContext&);
    /**
     * @symbol
     * ?deserialize\@LootItemKilledByActorCondition\@\@SA?AV?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@VValue\@Json\@\@\@Z
     */
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value);
};
