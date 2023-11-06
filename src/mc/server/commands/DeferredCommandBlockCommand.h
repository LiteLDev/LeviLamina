#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/DeferredCommandBase.h"

class DeferredCommandBlockCommand : public ::DeferredCommandBase {
public:
    // prevent constructor by default
    DeferredCommandBlockCommand& operator=(DeferredCommandBlockCommand const&);
    DeferredCommandBlockCommand(DeferredCommandBlockCommand const&);
    DeferredCommandBlockCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~DeferredCommandBlockCommand();

    // vIndex: 1, symbol: ?execute@DeferredCommandBlockCommand@@UEAAXAEAVMinecraftCommands@@@Z
    virtual void execute(class MinecraftCommands&);

    // NOLINTEND
};
