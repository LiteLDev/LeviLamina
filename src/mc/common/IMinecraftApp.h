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
    // symbol: ??1IMinecraftApp@@UEAA@XZ
    MCVAPI ~IMinecraftApp();

    // NOLINTEND
};
