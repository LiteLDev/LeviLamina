#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IMinecraftApp {
public:
    // prevent constructor by default
    IMinecraftApp& operator=(IMinecraftApp const&) = delete;
    IMinecraftApp(IMinecraftApp const&)            = delete;
    IMinecraftApp()                                = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1IMinecraftApp@@UEAA@XZ
    MCVAPI ~IMinecraftApp();

    // NOLINTEND
};
