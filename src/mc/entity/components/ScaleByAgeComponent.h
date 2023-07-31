#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScaleByAgeComponent {

public:
    // prevent constructor by default
    ScaleByAgeComponent& operator=(ScaleByAgeComponent const&) = delete;
    ScaleByAgeComponent(ScaleByAgeComponent const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ScaleByAgeComponent\@\@QEAA\@XZ
     */
    MCAPI ScaleByAgeComponent();
    /**
     * @symbol ?_initializeScale\@ScaleByAgeComponent\@\@QEAAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void _initializeScale(class EntityContext&);
    // NOLINTEND
};
