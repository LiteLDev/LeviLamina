#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AdventureSettings {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADVENTURESETTINGS
public:
    AdventureSettings& operator=(AdventureSettings const&) = delete;
    AdventureSettings(AdventureSettings const&)            = delete;
#endif

public:
    /**
     * @symbol ??0AdventureSettings\@\@QEAA\@XZ
     */
    MCAPI AdventureSettings();
};
