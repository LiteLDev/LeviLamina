#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class GetSpawnPointCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETSPAWNPOINTCOMMAND
public:
    GetSpawnPointCommand& operator=(GetSpawnPointCommand const&) = delete;
    GetSpawnPointCommand(GetSpawnPointCommand const&)            = delete;
    GetSpawnPointCommand()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@GetSpawnPointCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@GetSpawnPointCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};
