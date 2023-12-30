#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootItemFunctions {
public:
    // prevent constructor by default
    LootItemFunctions& operator=(LootItemFunctions const&);
    LootItemFunctions(LootItemFunctions const&);
    LootItemFunctions();

public:
    // NOLINTBEGIN
    // symbol:
    // ?deserialize@LootItemFunctions@@SA?AV?$vector@V?$unique_ptr@VLootItemFunction@@U?$default_delete@VLootItemFunction@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemFunction@@U?$default_delete@VLootItemFunction@@@std@@@std@@@2@@std@@VValue@Json@@@Z
    MCAPI static std::vector<std::unique_ptr<class LootItemFunction>> deserialize(class Json::Value object);

    // NOLINTEND
};
