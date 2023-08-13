#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DeferredCommandBase {

public:
    // prevent constructor by default
    DeferredCommandBase& operator=(DeferredCommandBase const&) = delete;
    DeferredCommandBase(DeferredCommandBase const&)            = delete;
    DeferredCommandBase()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@DeferredScriptCommand\@\@UEAAXAEAVMinecraftCommands\@\@\@Z
     */
    virtual void execute(class MinecraftCommands&) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEFERREDCOMMANDBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DeferredCommandBase();
#endif
    // NOLINTEND
};
