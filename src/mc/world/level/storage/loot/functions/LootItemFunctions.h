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
    MCAPI static std::vector<std::unique_ptr<class LootItemFunction>> deserialize(class Json::Value object);

    // NOLINTEND
};
