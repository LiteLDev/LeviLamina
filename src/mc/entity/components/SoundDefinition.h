#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SoundDefinition {

public:
    // prevent constructor by default
    SoundDefinition& operator=(SoundDefinition const&) = delete;
    SoundDefinition(SoundDefinition const&)            = delete;
    SoundDefinition()                                  = delete;

public:
    /**
     * @symbol ??1SoundDefinition\@\@QEAA\@XZ
     */
    MCAPI ~SoundDefinition(); // NOLINT
};
