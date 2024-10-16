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
    LootTableReference& operator=(LootTableReference const&);
    LootTableReference(LootTableReference const&);
    LootTableReference();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual bool
    _createItem(std::vector<class ItemStack>& output, class Random& random, class LootTableContext& context) const;

    // vIndex: 1
    virtual ~LootTableReference() = default;

    MCAPI static std::unique_ptr<class LootPoolEntry> deserialize(
        class Json::Value                                      entry,
        int                                                    weight,
        int                                                    quality,
        std::vector<std::unique_ptr<class LootItemCondition>>& conditions
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool
    _createItem$(std::vector<class ItemStack>& output, class Random& random, class LootTableContext& context) const;

    // NOLINTEND
};
