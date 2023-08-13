#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/loot/entries/LootPoolEntry.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class LootTableReference : public ::LootPoolEntry {

public:
    // prevent constructor by default
    LootTableReference& operator=(LootTableReference const&) = delete;
    LootTableReference(LootTableReference const&)            = delete;
    LootTableReference()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol
     * ?_createItem\@LootTableReference\@\@MEAA_NAEAV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool _createItem(std::vector<class ItemStack>&, class Random&, class LootTableContext&);
    /**
     * @symbol
     * ?deserialize\@LootTableReference\@\@SA?AV?$unique_ptr\@VLootPoolEntry\@\@U?$default_delete\@VLootPoolEntry\@\@\@std\@\@\@std\@\@VValue\@Json\@\@HHAEAV?$vector\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI static std::unique_ptr<class LootPoolEntry>
    deserialize(class Json::Value, int, int, std::vector<std::unique_ptr<class LootItemCondition>>&);
    // NOLINTEND
};
