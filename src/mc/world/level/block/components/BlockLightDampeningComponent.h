#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockLightDampeningComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKLIGHTDAMPENINGCOMPONENT
public:
    BlockLightDampeningComponent& operator=(BlockLightDampeningComponent const&) = delete;
    BlockLightDampeningComponent(BlockLightDampeningComponent const&)            = delete;
    BlockLightDampeningComponent()                                               = delete;
#endif

public:
    /**
     * @symbol ?usesNewComponentStorage\@BlockLightDampeningComponent\@\@SA_NXZ
     */
    MCAPI static bool usesNewComponentStorage();
};
