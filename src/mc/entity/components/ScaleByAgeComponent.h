#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScaleByAgeComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCALEBYAGECOMPONENT
public:
    ScaleByAgeComponent& operator=(ScaleByAgeComponent const&) = delete;
    ScaleByAgeComponent(ScaleByAgeComponent const&)            = delete;
#endif

public:
    /**
     * @symbol ??0ScaleByAgeComponent\@\@QEAA\@XZ
     */
    MCAPI ScaleByAgeComponent();
    /**
     * @symbol ?_initializeScale\@ScaleByAgeComponent\@\@QEAAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void _initializeScale(class EntityContext&);
};
