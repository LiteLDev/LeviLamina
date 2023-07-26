#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DynamicAmbientSound {

public:
    // prevent constructor by default
    DynamicAmbientSound& operator=(DynamicAmbientSound const&) = delete;
    DynamicAmbientSound(DynamicAmbientSound const&)            = delete;
    DynamicAmbientSound()                                      = delete;

public:
    /**
     * @symbol ??1DynamicAmbientSound\@\@QEAA\@XZ
     */
    MCAPI ~DynamicAmbientSound(); // NOLINT
};
