#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SpecificEnchantFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    SpecificEnchantFunction& operator=(SpecificEnchantFunction const&);
    SpecificEnchantFunction(SpecificEnchantFunction const&);
    SpecificEnchantFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SpecificEnchantFunction() = default;

    // vIndex: 1
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context);

    // vIndex: 3
    virtual void apply(class ItemInstance& itemInstance, class Random& random, class LootTableContext& context);

    MCAPI static std::unique_ptr<class LootItemFunction>
    deserialize(class Json::Value object, std::vector<std::unique_ptr<class LootItemCondition>>& predicates);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _applyInner(class ItemStackBase& item, class Random& random, class LootTableContext&, bool allowNonVanilla);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void apply$(class ItemStack& item, class Random& random, class LootTableContext& context);

    MCAPI void apply$(class ItemInstance& itemInstance, class Random& random, class LootTableContext& context);

    // NOLINTEND
};
