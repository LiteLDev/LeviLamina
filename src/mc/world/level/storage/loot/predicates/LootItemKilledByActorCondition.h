#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/predicates/LootItemCondition.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootItemKilledByActorCondition : public ::LootItemCondition {
public:
    // prevent constructor by default
    LootItemKilledByActorCondition& operator=(LootItemKilledByActorCondition const&);
    LootItemKilledByActorCondition(LootItemKilledByActorCondition const&);
    LootItemKilledByActorCondition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LootItemKilledByActorCondition() = default;

    // vIndex: 1
    virtual bool applies(class Random& random, class LootTableContext& context);

    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value object);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool applies$(class Random& random, class LootTableContext& context);

    // NOLINTEND
};
