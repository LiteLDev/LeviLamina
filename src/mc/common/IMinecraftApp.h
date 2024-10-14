#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IMinecraftApp {
public:
    // prevent constructor by default
    IMinecraftApp& operator=(IMinecraftApp const&);
    IMinecraftApp(IMinecraftApp const&);
    IMinecraftApp();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IMinecraftApp();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
