#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BlockComponentBase.h"

struct BlockFlammableComponent : public ::BlockComponentBase {
public:
    // prevent constructor by default
    BlockFlammableComponent& operator=(BlockFlammableComponent const&);
    BlockFlammableComponent(BlockFlammableComponent const&);
    BlockFlammableComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~BlockFlammableComponent() = default;

    // symbol: ?usesNewComponentStorage@BlockFlammableComponent@@SA_NXZ
    MCAPI static bool usesNewComponentStorage();

    // NOLINTEND
};
