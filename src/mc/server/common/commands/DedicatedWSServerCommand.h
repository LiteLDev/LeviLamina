#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class DedicatedWSServerCommand : public ::Command {

public:
    // prevent constructor by default
    DedicatedWSServerCommand& operator=(DedicatedWSServerCommand const&) = delete;
    DedicatedWSServerCommand(DedicatedWSServerCommand const&)            = delete;
    DedicatedWSServerCommand()                                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@DedicatedWSServerCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?setup\@DedicatedWSServerCommand\@\@SAXAEAVCommandRegistry\@\@AEAVIMinecraftApp\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&, class IMinecraftApp&); // NOLINT

    // private:

private:
    /**
     * @symbol ?mApp\@DedicatedWSServerCommand\@\@0PEAVIMinecraftApp\@\@EA
     */
    MCAPI static class IMinecraftApp* mApp; // NOLINT
};
