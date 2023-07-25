#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class QueryTargetCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_QUERYTARGETCOMMAND
public:
    QueryTargetCommand& operator=(QueryTargetCommand const&) = delete;
    QueryTargetCommand(QueryTargetCommand const&)            = delete;
    QueryTargetCommand()                                     = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@QueryTargetCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@QueryTargetCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};
