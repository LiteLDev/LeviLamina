#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class WSServerCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WSSERVERCOMMAND
public:
    WSServerCommand& operator=(WSServerCommand const&) = delete;
    WSServerCommand(WSServerCommand const&)            = delete;
    WSServerCommand()                                  = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@WSServerCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@WSServerCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};
