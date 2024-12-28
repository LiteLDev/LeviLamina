#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Interactions::Mining {

class IMinecraftApiDependencies {
public:
    // prevent constructor by default
    IMinecraftApiDependencies& operator=(IMinecraftApiDependencies const&);
    IMinecraftApiDependencies(IMinecraftApiDependencies const&);
    IMinecraftApiDependencies();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IMinecraftApiDependencies();

    // vIndex: 1
    virtual void finishMiningHook() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Interactions::Mining
