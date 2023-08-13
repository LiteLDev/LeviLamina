#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

class LootItemKilledByPlayerOrPetsCondition : public ::LootItemCondition {

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
