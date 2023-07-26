#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrailComponent {

public:
    // prevent constructor by default
    TrailComponent& operator=(TrailComponent const&) = delete;
    TrailComponent(TrailComponent const&)            = delete;

public:
    /**
     * @symbol ??0TrailComponent\@\@QEAA\@XZ
     */
    MCAPI TrailComponent(); // NOLINT
    /**
     * @symbol ?initFromDefinition\@TrailComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&); // NOLINT
};
