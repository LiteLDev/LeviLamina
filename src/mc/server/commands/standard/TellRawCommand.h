#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/standard/MessagingCommand.h"

class TellRawCommand : public ::MessagingCommand {
public:
    // prevent constructor by default
    TellRawCommand& operator=(TellRawCommand const&);
    TellRawCommand(TellRawCommand const&);
    TellRawCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TellRawCommand@@UEAA@XZ
    virtual ~TellRawCommand() = default;

    // vIndex: 2, symbol: ?execute@TellRawCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@TellRawCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
