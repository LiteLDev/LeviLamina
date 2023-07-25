#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class PlaySoundCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYSOUNDCOMMAND
public:
    PlaySoundCommand& operator=(PlaySoundCommand const&) = delete;
    PlaySoundCommand(PlaySoundCommand const&)            = delete;
    PlaySoundCommand()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@PlaySoundCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@PlaySoundCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};
