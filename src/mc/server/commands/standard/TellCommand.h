#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/standard/MessagingCommand.h"

class TellCommand : public ::MessagingCommand {
public:
    // prevent constructor by default
    TellCommand& operator=(TellCommand const&);
    TellCommand(TellCommand const&);
    TellCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~TellCommand();

    // vIndex: 2, symbol: ?execute@TellCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@TellCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_sendMessageToPlayer@TellCommand@@CAXAEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1AEBUCommandOriginIdentity@@AEAVLevel@@@Z
    MCAPI static void
    _sendMessageToPlayer(class Player&, std::string const&, std::string const&, struct CommandOriginIdentity const&, class Level&);

    // NOLINTEND
};
