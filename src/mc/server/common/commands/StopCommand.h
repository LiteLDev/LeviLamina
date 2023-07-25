#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class StopCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOPCOMMAND
public:
    StopCommand& operator=(StopCommand const&) = delete;
    StopCommand(StopCommand const&)            = delete;
    StopCommand()                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@StopCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@StopCommand\@\@SAXAEAVCommandRegistry\@\@AEAVDedicatedServer\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&, class DedicatedServer&);

    // private:

private:
    /**
     * @symbol ?mServer\@StopCommand\@\@0PEAVDedicatedServer\@\@EA
     */
    MCAPI static class DedicatedServer* mServer;
};
