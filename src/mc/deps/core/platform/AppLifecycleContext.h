#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AppLifecycleContext {
public:
    // prevent constructor by default
    AppLifecycleContext& operator=(AppLifecycleContext const&);
    AppLifecycleContext(AppLifecycleContext const&);

public:
    // NOLINTBEGIN
    MCAPI AppLifecycleContext();

    // NOLINTEND
};
