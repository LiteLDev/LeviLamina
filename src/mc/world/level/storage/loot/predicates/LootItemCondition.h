#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootItemCondition {
public:
    // prevent constructor by default
    LootItemCondition& operator=(LootItemCondition const&);
    LootItemCondition(LootItemCondition const&);
    LootItemCondition();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?applies@LootItemKilledByPlayerOrPetsCondition@@UEAA_NAEAVRandom@@AEAVLootTableContext@@@Z
    virtual bool applies(class Random&, class LootTableContext&) = 0;

    // symbol: ??1LootItemCondition@@UEAA@XZ
    MCVAPI ~LootItemCondition();

    // symbol:
    // ?deserialize@LootItemCondition@@SA?AV?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@VValue@Json@@@Z
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value);

    // NOLINTEND
};
