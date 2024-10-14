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

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
