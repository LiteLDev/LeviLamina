#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AllWorkerConfigurations {
public:
    // prevent constructor by default
    AllWorkerConfigurations& operator=(AllWorkerConfigurations const&);
    AllWorkerConfigurations(AllWorkerConfigurations const&);

public:
    // NOLINTBEGIN
    MCAPI AllWorkerConfigurations();

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
