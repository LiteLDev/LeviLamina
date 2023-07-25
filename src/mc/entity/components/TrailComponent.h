#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrailComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRAILCOMPONENT
public:
    TrailComponent& operator=(TrailComponent const&) = delete;
    TrailComponent(TrailComponent const&)            = delete;
#endif

public:
    /**
     * @symbol ??0TrailComponent\@\@QEAA\@XZ
     */
    MCAPI TrailComponent();
    /**
     * @symbol ?initFromDefinition\@TrailComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&);
};
