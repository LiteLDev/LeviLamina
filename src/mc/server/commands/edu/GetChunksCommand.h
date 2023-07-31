#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class GetChunksCommand : public ::Command {

public:
    // prevent constructor by default
    GetChunksCommand& operator=(GetChunksCommand const&) = delete;
    GetChunksCommand(GetChunksCommand const&)            = delete;
    GetChunksCommand()                                   = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
