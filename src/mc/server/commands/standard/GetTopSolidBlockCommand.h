#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class GetTopSolidBlockCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETTOPSOLIDBLOCKCOMMAND
public:
    GetTopSolidBlockCommand& operator=(GetTopSolidBlockCommand const&) = delete;
    GetTopSolidBlockCommand(GetTopSolidBlockCommand const&)            = delete;
    GetTopSolidBlockCommand()                                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@GetTopSolidBlockCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@GetTopSolidBlockCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};
