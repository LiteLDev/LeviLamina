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
    // vIndex: 0
    virtual ~LootItemCondition();

    // vIndex: 1
    virtual bool applies(class Random& random, class LootTableContext& context) = 0;

    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value object);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
