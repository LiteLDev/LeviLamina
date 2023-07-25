#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockLightEmissionComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKLIGHTEMISSIONCOMPONENT
public:
    BlockLightEmissionComponent& operator=(BlockLightEmissionComponent const&) = delete;
    BlockLightEmissionComponent(BlockLightEmissionComponent const&)            = delete;
    BlockLightEmissionComponent()                                              = delete;
#endif

public:
    /**
     * @symbol ?usesNewComponentStorage\@BlockLightEmissionComponent\@\@SA_NXZ
     */
    MCAPI static bool usesNewComponentStorage();
};
