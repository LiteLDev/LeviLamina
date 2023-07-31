#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockMapColorComponent {

public:
    // prevent constructor by default
    BlockMapColorComponent& operator=(BlockMapColorComponent const&) = delete;
    BlockMapColorComponent(BlockMapColorComponent const&)            = delete;
    BlockMapColorComponent()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?usesNewComponentStorage\@BlockMapColorComponent\@\@SA_NXZ
     */
    MCAPI static bool usesNewComponentStorage();
    // NOLINTEND
};
