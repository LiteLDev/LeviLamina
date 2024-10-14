#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AdventureSettings {
public:
    // prevent constructor by default
    AdventureSettings& operator=(AdventureSettings const&);
    AdventureSettings(AdventureSettings const&);

public:
    // NOLINTBEGIN
    MCAPI AdventureSettings();

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
