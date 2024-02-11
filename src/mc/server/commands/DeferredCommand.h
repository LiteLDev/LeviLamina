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
    virtual void execute(class MinecraftCommands& commands);

    // symbol:
    // ??0DeferredCommand@@QEAA@V?$unique_ptr@VCommandContext@@U?$default_delete@VCommandContext@@@std@@@std@@_N1V?$function@$$A6AXUMCRESULT@@@Z@2@@Z
    MCAPI DeferredCommand(
        std::unique_ptr<class CommandContext> context,
        bool                                  suppressOutput,
        bool                                  isRequest,
        std::function<void(struct MCRESULT)>  callback
    );

    // NOLINTEND
};
