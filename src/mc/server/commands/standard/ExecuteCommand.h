#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ExecuteCommand : public ::Command {

public:
    // prevent constructor by default
    ExecuteCommand& operator=(ExecuteCommand const&) = delete;
    ExecuteCommand(ExecuteCommand const&)            = delete;
    ExecuteCommand()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@ExecuteCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?setup\@ExecuteCommand\@\@SAXAEAVCommandRegistry\@\@_NH\@Z
     */
    MCAPI static void setup(class CommandRegistry&, bool, int); // NOLINT
};
