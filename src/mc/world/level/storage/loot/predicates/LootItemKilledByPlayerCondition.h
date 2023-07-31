#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LootItemKilledByPlayerCondition {

public:
    // prevent constructor by default
    LootItemKilledByPlayerCondition& operator=(LootItemKilledByPlayerCondition const&) = delete;
    LootItemKilledByPlayerCondition(LootItemKilledByPlayerCondition const&)            = delete;
    LootItemKilledByPlayerCondition()                                                  = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
