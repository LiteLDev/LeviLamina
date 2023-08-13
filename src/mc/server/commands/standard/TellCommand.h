#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/standard/MessagingCommand.h"

class TellCommand : public ::MessagingCommand {

public:
    // prevent constructor by default
    TellCommand& operator=(TellCommand const&) = delete;
    TellCommand(TellCommand const&)            = delete;
    TellCommand()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?execute\@TellCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@TellCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_sendMessageToPlayer\@TellCommand\@\@CAXAEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1AEBUCommandOriginIdentity\@\@AEAVLevel\@\@\@Z
     */
    MCAPI static void
    _sendMessageToPlayer(class Player&, std::string const&, std::string const&, struct CommandOriginIdentity const&, class Level&);
    // NOLINTEND
};
