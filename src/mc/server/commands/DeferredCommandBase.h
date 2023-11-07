#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DeferredCommandBase {
public:
    // prevent constructor by default
    DeferredCommandBase& operator=(DeferredCommandBase const&);
    DeferredCommandBase(DeferredCommandBase const&);
    DeferredCommandBase();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DeferredCommandBase@@UEAA@XZ
    virtual ~DeferredCommandBase();

    // vIndex: 1, symbol: ?execute@DeferredCommandBlockCommand@@UEAAXAEAVMinecraftCommands@@@Z
    virtual void execute(class MinecraftCommands&) = 0;

    // NOLINTEND
};
