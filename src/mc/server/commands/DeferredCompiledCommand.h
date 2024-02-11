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
    // vIndex: 0, symbol: __gen_??1DeferredCompiledCommand@@UEAA@XZ
    virtual ~DeferredCompiledCommand() = default;

    // vIndex: 1, symbol: ?execute@DeferredCompiledCommand@@UEAAXAEAVMinecraftCommands@@@Z
    virtual void execute(class MinecraftCommands&);

    // symbol:
    // ??0DeferredCompiledCommand@@QEAA@V?$not_null@PEAVCommand@@@gsl@@V?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@@Z
    MCAPI DeferredCompiledCommand(gsl::not_null<class Command*>, std::unique_ptr<class CommandOrigin> origin);

    // NOLINTEND
};
