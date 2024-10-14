#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScreenCapabilitiesRepo {
public:
    // prevent constructor by default
    ScreenCapabilitiesRepo& operator=(ScreenCapabilitiesRepo const&);
    ScreenCapabilitiesRepo(ScreenCapabilitiesRepo const&);

public:
    // NOLINTBEGIN
    MCAPI ScreenCapabilitiesRepo();

    MCAPI std::unique_ptr<class IScreenCapabilities> get(std::string const& screenName) const;

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
