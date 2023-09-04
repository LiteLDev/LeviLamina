#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/DeferredCommandBase.h"

class DeferredCommandBlockCommand : public ::DeferredCommandBase {
public:
    // prevent constructor by default
    DeferredCommandBlockCommand& operator=(DeferredCommandBlockCommand const&) = delete;
    DeferredCommandBlockCommand(DeferredCommandBlockCommand const&)            = delete;
    DeferredCommandBlockCommand()                                              = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?execute@DeferredCommandBlockCommand@@UEAAXAEAVMinecraftCommands@@@Z
    virtual void execute(class MinecraftCommands&);

    // NOLINTEND
};
