#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

class LootItemKilledByPlayerCondition : public ::LootItemCondition {
public:
    // prevent constructor by default
    LootItemKilledByPlayerCondition& operator=(LootItemKilledByPlayerCondition const&);
    LootItemKilledByPlayerCondition(LootItemKilledByPlayerCondition const&);
    LootItemKilledByPlayerCondition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?applies@LootItemKilledByPlayerCondition@@UEAA_NAEAVRandom@@AEAVLootTableContext@@@Z
    virtual bool applies(class Random&, class LootTableContext&);

    // NOLINTEND
};
