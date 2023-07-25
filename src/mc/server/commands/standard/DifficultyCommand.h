#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class DifficultyCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIFFICULTYCOMMAND
public:
    DifficultyCommand& operator=(DifficultyCommand const&) = delete;
    DifficultyCommand(DifficultyCommand const&)            = delete;
    DifficultyCommand()                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@DifficultyCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@DifficultyCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};
