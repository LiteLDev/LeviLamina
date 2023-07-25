#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class TellRawCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TELLRAWCOMMAND
public:
    TellRawCommand& operator=(TellRawCommand const&) = delete;
    TellRawCommand(TellRawCommand const&)            = delete;
    TellRawCommand()                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@TellRawCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@TellRawCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};
