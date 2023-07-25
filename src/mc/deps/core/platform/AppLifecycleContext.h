#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AppLifecycleContext {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_APPLIFECYCLECONTEXT
public:
    AppLifecycleContext& operator=(AppLifecycleContext const&) = delete;
    AppLifecycleContext(AppLifecycleContext const&)            = delete;
#endif

public:
    /**
     * @symbol ??0AppLifecycleContext\@\@QEAA\@XZ
     */
    MCAPI AppLifecycleContext();
};
