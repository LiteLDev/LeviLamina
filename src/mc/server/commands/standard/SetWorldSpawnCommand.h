#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class SetWorldSpawnCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETWORLDSPAWNCOMMAND
public:
    SetWorldSpawnCommand& operator=(SetWorldSpawnCommand const&) = delete;
    SetWorldSpawnCommand(SetWorldSpawnCommand const&)            = delete;
    SetWorldSpawnCommand()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@SetWorldSpawnCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@SetWorldSpawnCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};
