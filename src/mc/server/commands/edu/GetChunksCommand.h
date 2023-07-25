#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class GetChunksCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETCHUNKSCOMMAND
public:
    GetChunksCommand& operator=(GetChunksCommand const&) = delete;
    GetChunksCommand(GetChunksCommand const&)            = delete;
    GetChunksCommand()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@GetChunksCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
};
