#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LootItemKilledByPlayerCondition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMKILLEDBYPLAYERCONDITION
public:
    LootItemKilledByPlayerCondition& operator=(LootItemKilledByPlayerCondition const&) = delete;
    LootItemKilledByPlayerCondition(LootItemKilledByPlayerCondition const&)            = delete;
    LootItemKilledByPlayerCondition()                                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?applies\@LootItemKilledByPlayerCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random&, class LootTableContext&);
};
