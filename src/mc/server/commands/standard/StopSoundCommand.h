#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class StopSoundCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOPSOUNDCOMMAND
public:
    StopSoundCommand& operator=(StopSoundCommand const&) = delete;
    StopSoundCommand(StopSoundCommand const&)            = delete;
    StopSoundCommand()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@StopSoundCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@StopSoundCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};
