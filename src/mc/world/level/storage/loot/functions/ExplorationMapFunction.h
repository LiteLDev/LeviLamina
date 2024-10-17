#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ExplorationMapFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    ExplorationMapFunction& operator=(ExplorationMapFunction const&);
    ExplorationMapFunction(ExplorationMapFunction const&);
    ExplorationMapFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ExplorationMapFunction() = default;

    // vIndex: 1
    virtual void apply(class ItemStack& item, class Random&, class LootTableContext& context);

    // vIndex: 3
    virtual void apply(class ItemInstance& item, class Random&, class LootTableContext& context);

    MCAPI static std::unique_ptr<class LootItemFunction>
    deserialize(class Json::Value object, std::vector<std::unique_ptr<class LootItemCondition>>& predicates);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void apply$(class ItemStack& item, class Random&, class LootTableContext& context);

    MCAPI void apply$(class ItemInstance& item, class Random&, class LootTableContext& context);

    // NOLINTEND
};
