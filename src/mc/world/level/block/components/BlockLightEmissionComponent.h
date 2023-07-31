#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockLightEmissionComponent {

public:
    // prevent constructor by default
    BlockLightEmissionComponent& operator=(BlockLightEmissionComponent const&) = delete;
    BlockLightEmissionComponent(BlockLightEmissionComponent const&)            = delete;
    BlockLightEmissionComponent()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?usesNewComponentStorage\@BlockLightEmissionComponent\@\@SA_NXZ
     */
    MCAPI static bool usesNewComponentStorage();
    // NOLINTEND
};
