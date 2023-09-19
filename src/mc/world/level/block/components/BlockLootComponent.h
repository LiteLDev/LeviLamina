#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BlockComponentBase.h"

struct BlockLootComponent : public ::BlockComponentBase {
public:
    // prevent constructor by default
    BlockLootComponent& operator=(BlockLootComponent const&);
    BlockLootComponent(BlockLootComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??1BlockLootComponent@@UEAA@XZ
    MCVAPI ~BlockLootComponent();

    // symbol: ??0BlockLootComponent@@QEAA@XZ
    MCAPI BlockLootComponent();

    // symbol: ?getLootTable@BlockLootComponent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getLootTable() const;

    // NOLINTEND
};
