#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class HelpCommand : public ::Command {

public:
    // prevent constructor by default
    HelpCommand& operator=(HelpCommand const&) = delete;
    HelpCommand(HelpCommand const&)            = delete;
    HelpCommand()                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@HelpCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?setup\@HelpCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&); // NOLINT

    // private:
    /**
     * @symbol ?getCommandHelp\@HelpCommand\@\@AEBAXAEBVCommandRegistry\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void
    getCommandHelp(class CommandRegistry const&, class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?getHelpPage\@HelpCommand\@\@AEBAXAEBVCommandRegistry\@\@AEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void
    getHelpPage(class CommandRegistry const&, class CommandOrigin const&, class CommandOutput&) const; // NOLINT

private:
};
