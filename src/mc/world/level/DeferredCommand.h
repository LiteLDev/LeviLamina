#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class DeferredCommand : public ::Command {

public:
    // prevent constructor by default
    DeferredCommand& operator=(DeferredCommand const&) = delete;
    DeferredCommand(DeferredCommand const&)            = delete;
    DeferredCommand()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@DeferredCommand\@\@UEAAXAEAVMinecraftCommands\@\@\@Z
     */
    virtual void execute(class MinecraftCommands&); // NOLINT
};
