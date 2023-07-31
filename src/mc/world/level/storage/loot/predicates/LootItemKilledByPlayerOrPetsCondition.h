#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LootItemKilledByPlayerOrPetsCondition {

public:
    // prevent constructor by default
    LootItemKilledByPlayerOrPetsCondition& operator=(LootItemKilledByPlayerOrPetsCondition const&) = delete;
    LootItemKilledByPlayerOrPetsCondition(LootItemKilledByPlayerOrPetsCondition const&)            = delete;
    LootItemKilledByPlayerOrPetsCondition()                                                        = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
