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
    // vIndex: 0, symbol: __gen_??1DeferredCommandBlockCommand@@UEAA@XZ
    virtual ~DeferredCommandBlockCommand() = default;

    // vIndex: 1, symbol: ?execute@DeferredCommandBlockCommand@@UEAAXAEAVMinecraftCommands@@@Z
    virtual void execute(class MinecraftCommands&);

    // NOLINTEND
};
