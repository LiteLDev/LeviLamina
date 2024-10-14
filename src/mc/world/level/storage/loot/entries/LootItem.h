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
    // vIndex: 0
    virtual bool
    _createItem(std::vector<class ItemStack>& output, class Random& random, class LootTableContext& context) const;

    // vIndex: 1
    virtual ~LootItem() = default;

    MCAPI static std::unique_ptr<class LootPoolEntry> deserialize(
        class Json::Value const&                               entry,
        int                                                    weight,
        int                                                    quality,
        std::vector<std::unique_ptr<class LootItemCondition>>& conditions
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool
    _createItem$(std::vector<class ItemStack>& output, class Random& random, class LootTableContext& context) const;

    // NOLINTEND
};
