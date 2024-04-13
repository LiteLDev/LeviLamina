#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemColor.h"
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
    // vIndex: 0, symbol: __gen_??1SetBannerDetailsFunction@@UEAA@XZ
    virtual ~SetBannerDetailsFunction() = default;

    // vIndex: 1, symbol: ?apply@SetBannerDetailsFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemStack& item, class Random& random, class LootTableContext& context);

    // vIndex: 3, symbol: ?apply@SetBannerDetailsFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual void apply(class ItemInstance& item, class Random& random, class LootTableContext& context);

    // symbol:
    // ?deserialize@SetBannerDetailsFunction@@SA?AV?$unique_ptr@VLootItemFunction@@U?$default_delete@VLootItemFunction@@@std@@@std@@VValue@Json@@AEAV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@3@@Z
    MCAPI static std::unique_ptr<class LootItemFunction>
    deserialize(class Json::Value object, std::vector<std::unique_ptr<class LootItemCondition>>& predicates);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_apply@SetBannerDetailsFunction@@AEBAXAEAVItemStackBase@@AEAVRandom@@AEAVLootTableContext@@@Z
    MCAPI void _apply(class ItemStackBase& item, class Random& random, class LootTableContext& context) const;

    // symbol:
    // ?_parseBannerPattern@SetBannerDetailsFunction@@CAXAEAV?$vector@U?$pair@EW4ItemColor@@@std@@V?$allocator@U?$pair@EW4ItemColor@@@std@@@2@@std@@AEBVValue@Json@@@Z
    MCAPI static void
    _parseBannerPattern(std::vector<std::pair<uchar, ::ItemColor>>& patternVec, class Json::Value const& object);

    // NOLINTEND
};
