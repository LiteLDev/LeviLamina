#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SpawnSettings {

public:
    // prevent constructor by default
    SpawnSettings& operator=(SpawnSettings const&) = delete;
    SpawnSettings()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0SpawnSettings\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI SpawnSettings(struct SpawnSettings const&);
    /**
     * @symbol ??1SpawnSettings\@\@QEAA\@XZ
     */
    MCAPI ~SpawnSettings();
    // NOLINTEND
};
