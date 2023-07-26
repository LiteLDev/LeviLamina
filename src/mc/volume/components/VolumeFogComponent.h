#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VolumeFogComponent {

public:
    // prevent constructor by default
    VolumeFogComponent& operator=(VolumeFogComponent const&) = delete;
    VolumeFogComponent(VolumeFogComponent const&)            = delete;
    VolumeFogComponent()                                     = delete;

public:
    /**
     * @symbol ??4VolumeFogComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class VolumeFogComponent& operator=(class VolumeFogComponent&&); // NOLINT
};
