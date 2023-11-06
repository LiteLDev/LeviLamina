#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/DeferredCommandBase.h"

class DeferredCompiledCommand : public ::DeferredCommandBase {
public:
    // prevent constructor by default
    DeferredCompiledCommand& operator=(DeferredCompiledCommand const&);
    DeferredCompiledCommand(DeferredCompiledCommand const&);
    DeferredCompiledCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~DeferredCompiledCommand();

    // vIndex: 1, symbol: ?execute@DeferredCompiledCommand@@UEAAXAEAVMinecraftCommands@@@Z
    virtual void execute(class MinecraftCommands&);

    // NOLINTEND
};
