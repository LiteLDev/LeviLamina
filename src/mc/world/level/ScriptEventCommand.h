#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ScriptEventCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTEVENTCOMMAND
public:
    ScriptEventCommand& operator=(ScriptEventCommand const&) = delete;
    ScriptEventCommand(ScriptEventCommand const&)            = delete;
    ScriptEventCommand()                                     = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@ScriptEventCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@ScriptEventCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};
