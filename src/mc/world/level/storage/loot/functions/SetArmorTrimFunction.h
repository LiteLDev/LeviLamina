#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SetArmorTrimFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    SetArmorTrimFunction& operator=(SetArmorTrimFunction const&);
    SetArmorTrimFunction(SetArmorTrimFunction const&);
    SetArmorTrimFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetArmorTrimFunction() = default;

    // vIndex: 1
    virtual void apply(class ItemStack&, class Random&, class LootTableContext&);

    // vIndex: 3
    virtual void apply(class ItemInstance&, class Random&, class LootTableContext&);

    MCAPI static std::unique_ptr<class LootItemFunction>
    deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>>&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _apply(class ItemStackBase&, class LootTableContext const&) const;

    // NOLINTEND
};
