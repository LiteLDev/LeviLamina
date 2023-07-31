#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class DeferredCompiledCommand : public ::Command {

public:
    // prevent constructor by default
    DeferredCompiledCommand& operator=(DeferredCompiledCommand const&) = delete;
    DeferredCompiledCommand(DeferredCompiledCommand const&)            = delete;
    DeferredCompiledCommand()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@DeferredCompiledCommand\@\@UEAAXAEAVMinecraftCommands\@\@\@Z
     */
    virtual void execute(class MinecraftCommands&);
    // NOLINTEND
};
