#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockLightDampeningComponent {

public:
    // prevent constructor by default
    BlockLightDampeningComponent& operator=(BlockLightDampeningComponent const&) = delete;
    BlockLightDampeningComponent(BlockLightDampeningComponent const&)            = delete;
    BlockLightDampeningComponent()                                               = delete;

public:
    /**
     * @symbol ?usesNewComponentStorage\@BlockLightDampeningComponent\@\@SA_NXZ
     */
    MCAPI static bool usesNewComponentStorage(); // NOLINT
};
