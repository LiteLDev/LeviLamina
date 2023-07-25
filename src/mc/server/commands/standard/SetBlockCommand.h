#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class SetBlockCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETBLOCKCOMMAND
public:
    SetBlockCommand& operator=(SetBlockCommand const&) = delete;
    SetBlockCommand(SetBlockCommand const&)            = delete;
    SetBlockCommand()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@SetBlockCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@SetBlockCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};
