#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class GetChunkDataCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETCHUNKDATACOMMAND
public:
    GetChunkDataCommand& operator=(GetChunkDataCommand const&) = delete;
    GetChunkDataCommand(GetChunkDataCommand const&)            = delete;
    GetChunkDataCommand()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@GetChunkDataCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@GetChunkDataCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};
