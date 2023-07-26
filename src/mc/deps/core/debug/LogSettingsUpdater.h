#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LogSettingsUpdater {

public:
    // prevent constructor by default
    LogSettingsUpdater& operator=(LogSettingsUpdater const&) = delete;
    LogSettingsUpdater(LogSettingsUpdater const&)            = delete;
    LogSettingsUpdater()                                     = delete;
};
