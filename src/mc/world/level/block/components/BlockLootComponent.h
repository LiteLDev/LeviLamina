#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentBase.h"

struct BlockLootComponent : public ::BlockComponentBase {
public:
    // prevent constructor by default
    BlockLootComponent& operator=(BlockLootComponent const&);
    BlockLootComponent(BlockLootComponent const&);
    BlockLootComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlockLootComponent@@UEAA@XZ
    virtual ~BlockLootComponent() = default;

    // symbol: ?getLootTable@BlockLootComponent@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getLootTable() const;

    // NOLINTEND
};
