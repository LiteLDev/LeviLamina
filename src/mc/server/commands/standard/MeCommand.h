#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/standard/MessagingCommand.h"

class MeCommand : public ::MessagingCommand {
public:
    // prevent constructor by default
    MeCommand& operator=(MeCommand const&);
    MeCommand(MeCommand const&);
    MeCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MeCommand@@UEAA@XZ
    virtual ~MeCommand() = default;

    // vIndex: 2, symbol: ?execute@MeCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@MeCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
