#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class DeferredCommandBlockCommand : public ::Command {

public:
    // prevent constructor by default
    DeferredCommandBlockCommand& operator=(DeferredCommandBlockCommand const&) = delete;
    DeferredCommandBlockCommand(DeferredCommandBlockCommand const&)            = delete;
    DeferredCommandBlockCommand()                                              = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
