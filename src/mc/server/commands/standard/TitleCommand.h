#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/standard/MessagingCommand.h"

class TitleCommand : public ::MessagingCommand {
public:
    // prevent constructor by default
    TitleCommand& operator=(TitleCommand const&);
    TitleCommand(TitleCommand const&);
    TitleCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TitleCommand@@UEAA@XZ
    virtual ~TitleCommand() = default;

    // vIndex: 2, symbol: ?execute@TitleCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@TitleCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
