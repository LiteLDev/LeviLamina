#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class GlobalPauseCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLOBALPAUSECOMMAND
public:
    GlobalPauseCommand& operator=(GlobalPauseCommand const&) = delete;
    GlobalPauseCommand(GlobalPauseCommand const&)            = delete;
    GlobalPauseCommand()                                     = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@GlobalPauseCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@GlobalPauseCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};
