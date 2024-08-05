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
};
