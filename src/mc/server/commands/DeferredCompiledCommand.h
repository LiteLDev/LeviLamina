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
    // vIndex: 0
    virtual ~DeferredCompiledCommand() = default;

    // vIndex: 1
    virtual void execute(class MinecraftCommands&);

    MCAPI
    DeferredCompiledCommand(gsl::not_null<class Command*> compiledCommand, std::unique_ptr<class CommandOrigin> origin);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void execute$(class MinecraftCommands&);

    // NOLINTEND
};
