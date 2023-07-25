#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ImmutableWorldCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMMUTABLEWORLDCOMMAND
public:
    ImmutableWorldCommand& operator=(ImmutableWorldCommand const&) = delete;
    ImmutableWorldCommand(ImmutableWorldCommand const&)            = delete;
    ImmutableWorldCommand()                                        = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@ImmutableWorldCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@ImmutableWorldCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};
