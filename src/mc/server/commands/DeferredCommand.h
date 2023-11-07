#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/DeferredCommandBase.h"

class DeferredCommand : public ::DeferredCommandBase {
public:
    // prevent constructor by default
    DeferredCommand& operator=(DeferredCommand const&);
    DeferredCommand(DeferredCommand const&);
    DeferredCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DeferredCommand@@UEAA@XZ
    virtual ~DeferredCommand() = default;

    // vIndex: 1, symbol: ?execute@DeferredCommand@@UEAAXAEAVMinecraftCommands@@@Z
    virtual void execute(class MinecraftCommands&);

    // NOLINTEND
};
