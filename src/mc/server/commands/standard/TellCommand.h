#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class TellCommand : public ::Command {

public:
    // prevent constructor by default
    TellCommand& operator=(TellCommand const&) = delete;
    TellCommand(TellCommand const&)            = delete;
    TellCommand()                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?execute\@TellCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const; // NOLINT
    /**
     * @symbol ?setup\@TellCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_sendMessageToPlayer\@TellCommand\@\@CAXAEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1AEBUCommandOriginIdentity\@\@AEAVLevel\@\@\@Z
     */
    MCAPI static void
    _sendMessageToPlayer(class Player&, std::string const&, std::string const&, struct CommandOriginIdentity const&, class Level&); // NOLINT

private:
};
