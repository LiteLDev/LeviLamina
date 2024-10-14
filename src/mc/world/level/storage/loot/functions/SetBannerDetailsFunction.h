#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemColor.h"
#include "mc/world/level/storage/loot/functions/LootItemFunction.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class SetBannerDetailsFunction : public ::LootItemFunction {
public:
    // prevent constructor by default
    SetBannerDetailsFunction& operator=(SetBannerDetailsFunction const&);
    SetBannerDetailsFunction(SetBannerDetailsFunction const&);
    SetBannerDetailsFunction();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetBannerDetailsFunction() = default;

    // vIndex: 1
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context);

    // vIndex: 3
    virtual void apply(class ItemInstance& item, class Random& random, class LootTableContext& context);

    MCAPI static std::unique_ptr<class LootItemFunction>
    deserialize(class Json::Value object, std::vector<std::unique_ptr<class LootItemCondition>>& predicates);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _apply(class ItemStackBase& item, class Random& random, class LootTableContext& context) const;

    MCAPI static void
    _parseBannerPattern(std::vector<std::pair<uchar, ::ItemColor>>& patternVec, class Json::Value const& object);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void apply$(class ItemStack& item, class Random& random, class LootTableContext& context);

    MCAPI void apply$(class ItemInstance& item, class Random& random, class LootTableContext& context);

    // NOLINTEND
};
