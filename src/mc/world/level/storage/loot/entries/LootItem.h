#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/entries/LootPoolEntry.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootItem : public ::LootPoolEntry {
public:
    // prevent constructor by default
    LootItem& operator=(LootItem const&);
    LootItem(LootItem const&);
    LootItem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?_createItem@LootItem@@MEBA_NAEAV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual bool
    _createItem(std::vector<class ItemStack>& output, class Random& random, class LootTableContext& context) const;

    // vIndex: 1, symbol: __gen_??1LootItem@@UEAA@XZ
    virtual ~LootItem() = default;

    // symbol:
    // ?deserialize@LootItem@@SA?AV?$unique_ptr@VLootPoolEntry@@U?$default_delete@VLootPoolEntry@@@std@@@std@@AEBVValue@Json@@HHAEAV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@3@@Z
    MCAPI static std::unique_ptr<class LootPoolEntry> deserialize(
        class Json::Value const&                               entry,
        int                                                    weight,
        int                                                    quality,
        std::vector<std::unique_ptr<class LootItemCondition>>& conditions
    );

    // NOLINTEND
};
