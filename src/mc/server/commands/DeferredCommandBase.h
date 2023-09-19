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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?execute@DeferredScriptCommand@@UEAAXAEAVMinecraftCommands@@@Z
    virtual void execute(class MinecraftCommands&) = 0;

    // symbol: ??1DeferredCommandBase@@UEAA@XZ
    MCVAPI ~DeferredCommandBase();

    // NOLINTEND
};
