#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentBase.h"

struct BlockLightEmissionComponent : public ::BlockComponentBase {
public:
    // prevent constructor by default
    BlockLightEmissionComponent& operator=(BlockLightEmissionComponent const&);
    BlockLightEmissionComponent(BlockLightEmissionComponent const&);
    BlockLightEmissionComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockLightEmissionComponent() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
