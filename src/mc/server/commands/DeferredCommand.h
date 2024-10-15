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
    // vIndex: 0
    virtual ~DeferredCommand() = default;

    // vIndex: 1
    virtual void execute(class MinecraftCommands& commands);

    MCAPI DeferredCommand(
        std::unique_ptr<class CommandContext> context,
        bool                                  suppressOutput,
        bool                                  isRequest,
        std::function<void(struct MCRESULT)>  callback
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        std::unique_ptr<class CommandContext> context,
        bool                                  suppressOutput,
        bool                                  isRequest,
        std::function<void(struct MCRESULT)>  callback
    );

    MCAPI void execute$(class MinecraftCommands& commands);

    // NOLINTEND
};
