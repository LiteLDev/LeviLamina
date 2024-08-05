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
    // vIndex: 0
    virtual bool
    _createItem(std::vector<class ItemStack>& output, class Random& random, class LootTableContext& context) const = 0;

    // vIndex: 1
    virtual ~LootPoolEntry();

    MCAPI static std::unique_ptr<class LootPoolEntry> deserialize(class Json::Value const& entryJson);

    // NOLINTEND
};
