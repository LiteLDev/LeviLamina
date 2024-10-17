#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootItemFunction {
public:
    // prevent constructor by default
    LootItemFunction& operator=(LootItemFunction const&);
    LootItemFunction(LootItemFunction const&);
    LootItemFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LootItemFunction();

    // vIndex: 1
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context) = 0;

    // vIndex: 2
    virtual int
    apply(class ItemStack& item, class Random& random, struct Trade const& trade, class LootTableContext& context);

    // vIndex: 3
    virtual void apply(class ItemInstance& item, class Random& random, class LootTableContext& context) = 0;

    // vIndex: 4
    virtual int
    apply(class ItemInstance& item, class Random& random, struct Trade const& trade, class LootTableContext& context);

    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value object);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI int
    apply$(class ItemStack& item, class Random& random, struct Trade const& trade, class LootTableContext& context);

    MCAPI int
    apply$(class ItemInstance& item, class Random& random, struct Trade const& trade, class LootTableContext& context);

    MCAPI static std::unordered_map<
        class HashedString,
        std::function<std::unique_ptr<
            class LootItemFunction>(class Json::Value&, std::vector<std::unique_ptr<class LootItemCondition>>&)>> const&
    mLootingFunctions();

    // NOLINTEND
};
