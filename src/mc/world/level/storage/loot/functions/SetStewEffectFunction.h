#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SetStewEffectFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    SetStewEffectFunction& operator=(SetStewEffectFunction const&);
    SetStewEffectFunction(SetStewEffectFunction const&);
    SetStewEffectFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetStewEffectFunction() = default;

    // vIndex: 1
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context);

    // vIndex: 3
    virtual void apply(class ItemInstance& itemInstance, class Random& random, class LootTableContext& context);

    MCAPI static std::unique_ptr<class LootItemFunction>
    deserialize(class Json::Value object, std::vector<std::unique_ptr<class LootItemCondition>>& predicates);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void apply$(class ItemStack& item, class Random& random, class LootTableContext& context);

    MCAPI void apply$(class ItemInstance& itemInstance, class Random& random, class LootTableContext& context);

    // NOLINTEND
};
