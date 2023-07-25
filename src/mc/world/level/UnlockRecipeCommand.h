#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class UnlockRecipeCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UNLOCKRECIPECOMMAND
public:
    UnlockRecipeCommand& operator=(UnlockRecipeCommand const&) = delete;
    UnlockRecipeCommand(UnlockRecipeCommand const&)            = delete;
    UnlockRecipeCommand()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@UnlockRecipeCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@UnlockRecipeCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};
