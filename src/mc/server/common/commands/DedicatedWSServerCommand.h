#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class DedicatedWSServerCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEDICATEDWSSERVERCOMMAND
public:
    DedicatedWSServerCommand& operator=(DedicatedWSServerCommand const&) = delete;
    DedicatedWSServerCommand(DedicatedWSServerCommand const&)            = delete;
    DedicatedWSServerCommand()                                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@DedicatedWSServerCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@DedicatedWSServerCommand\@\@SAXAEAVCommandRegistry\@\@AEAVIMinecraftApp\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&, class IMinecraftApp&);

    // private:

private:
    /**
     * @symbol ?mApp\@DedicatedWSServerCommand\@\@0PEAVIMinecraftApp\@\@EA
     */
    MCAPI static class IMinecraftApp* mApp;
};
