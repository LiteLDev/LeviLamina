#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ClearSpawnPointCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLEARSPAWNPOINTCOMMAND
public:
    ClearSpawnPointCommand& operator=(ClearSpawnPointCommand const&) = delete;
    ClearSpawnPointCommand(ClearSpawnPointCommand const&)            = delete;
    ClearSpawnPointCommand()                                         = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@ClearSpawnPointCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@ClearSpawnPointCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};
