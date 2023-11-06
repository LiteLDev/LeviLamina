#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BlockComponentBase.h"

struct BlockLightEmissionComponent : public ::BlockComponentBase {
public:
    // prevent constructor by default
    BlockLightEmissionComponent& operator=(BlockLightEmissionComponent const&);
    BlockLightEmissionComponent(BlockLightEmissionComponent const&);
    BlockLightEmissionComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~BlockLightEmissionComponent() = default;

    // symbol: ?usesNewComponentStorage@BlockLightEmissionComponent@@SA_NXZ
    MCAPI static bool usesNewComponentStorage();

    // NOLINTEND
};
