#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LootItemKilledByPlayerOrPetsCondition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMKILLEDBYPLAYERORPETSCONDITION
public:
    LootItemKilledByPlayerOrPetsCondition& operator=(LootItemKilledByPlayerOrPetsCondition const&) = delete;
    LootItemKilledByPlayerOrPetsCondition(LootItemKilledByPlayerOrPetsCondition const&)            = delete;
    LootItemKilledByPlayerOrPetsCondition()                                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?applies\@LootItemKilledByPlayerOrPetsCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random&, class LootTableContext&);
};
