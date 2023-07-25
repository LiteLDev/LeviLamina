#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class DeferredCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFERREDCOMMAND
public:
    DeferredCommand& operator=(DeferredCommand const&) = delete;
    DeferredCommand(DeferredCommand const&)            = delete;
    DeferredCommand()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@DeferredCommand\@\@UEAAXAEAVMinecraftCommands\@\@\@Z
     */
    virtual void execute(class MinecraftCommands&);
};
