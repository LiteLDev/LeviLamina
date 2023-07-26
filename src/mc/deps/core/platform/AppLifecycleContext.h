#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AppLifecycleContext {

public:
    // prevent constructor by default
    AppLifecycleContext& operator=(AppLifecycleContext const&) = delete;
    AppLifecycleContext(AppLifecycleContext const&)            = delete;

public:
    /**
     * @symbol ??0AppLifecycleContext\@\@QEAA\@XZ
     */
    MCAPI AppLifecycleContext(); // NOLINT
};
