#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DanceComponent {

public:
    // prevent constructor by default
    DanceComponent& operator=(DanceComponent const&) = delete;
    DanceComponent(DanceComponent const&)            = delete;

public:
    /**
     * @symbol ??0DanceComponent\@\@QEAA\@XZ
     */
    MCAPI DanceComponent(); // NOLINT
    /**
     * @symbol ?inListenDistance\@DanceComponent\@\@QEBA_NAEBVVec3\@\@\@Z
     */
    MCAPI bool inListenDistance(class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?initFromDefinition\@DanceComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ?initFromDefinition\@DanceComponent\@\@QEAAXAEAVActor\@\@M\@Z
     */
    MCAPI void initFromDefinition(class Actor&, float); // NOLINT
};
