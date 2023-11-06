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
    // vIndex: 0, symbol: ??1IMinecraftApp@@UEAA@XZ
    virtual ~IMinecraftApp();

    // NOLINTEND
};
