#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SpawnSettings {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNSETTINGS
public:
    SpawnSettings& operator=(SpawnSettings const&) = delete;
    SpawnSettings()                                = delete;
#endif

public:
    /**
     * @symbol ??0SpawnSettings\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI SpawnSettings(struct SpawnSettings const&);
    /**
     * @symbol ??1SpawnSettings\@\@QEAA\@XZ
     */
    MCAPI ~SpawnSettings();
};
