#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootPoolEntry {
public:
    // prevent constructor by default
    LootPoolEntry& operator=(LootPoolEntry const&);
    LootPoolEntry(LootPoolEntry const&);
    LootPoolEntry();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?_createItem@LootTableEntry@@MEAA_NAEAV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEAVRandom@@AEAVLootTableContext@@@Z
    virtual bool _createItem(std::vector<class ItemStack>&, class Random&, class LootTableContext&) = 0;

    // symbol: ??1LootPoolEntry@@UEAA@XZ
    MCVAPI ~LootPoolEntry();

    // symbol:
    // ?createItem@LootPoolEntry@@QEAAXAEAV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEAVRandom@@AEAVLootTableContext@@@Z
    MCAPI void createItem(std::vector<class ItemStack>&, class Random&, class LootTableContext&);

    // symbol:
    // ?getConditions@LootPoolEntry@@QEBAAEBV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::unique_ptr<class LootItemCondition>> const& getConditions() const;

    // symbol: ?getWeight@LootPoolEntry@@QEBAHM@Z
    MCAPI int getWeight(float) const;

    // symbol:
    // ?deserialize@LootPoolEntry@@SA?AV?$unique_ptr@VLootPoolEntry@@U?$default_delete@VLootPoolEntry@@@std@@@std@@AEBVValue@Json@@@Z
    MCAPI static std::unique_ptr<class LootPoolEntry> deserialize(class Json::Value const&);

    // NOLINTEND
};
