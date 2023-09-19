#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AppLifecycleContext {
public:
    // prevent constructor by default
    AppLifecycleContext& operator=(AppLifecycleContext const&);
    AppLifecycleContext(AppLifecycleContext const&);

public:
    // NOLINTBEGIN
    // symbol: ??0AppLifecycleContext@@QEAA@XZ
    MCAPI AppLifecycleContext();

    // NOLINTEND
};
