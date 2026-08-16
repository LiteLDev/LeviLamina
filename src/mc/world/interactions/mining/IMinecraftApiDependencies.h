#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Interactions::Mining {

class IMinecraftApiDependencies {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMinecraftApiDependencies();

    virtual void finishMiningHook() = 0;
    // NOLINTEND
};

} // namespace Interactions::Mining
