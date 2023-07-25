#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class DeferredCommandBlockCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFERREDCOMMANDBLOCKCOMMAND
public:
    DeferredCommandBlockCommand& operator=(DeferredCommandBlockCommand const&) = delete;
    DeferredCommandBlockCommand(DeferredCommandBlockCommand const&)            = delete;
    DeferredCommandBlockCommand()                                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@DeferredCommandBlockCommand\@\@UEAAXAEAVMinecraftCommands\@\@\@Z
     */
    virtual void execute(class MinecraftCommands&);
};
