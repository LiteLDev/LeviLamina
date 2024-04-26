#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class StopCommand : public ::Command {
public:
    // prevent constructor by default
    StopCommand& operator=(StopCommand const&);
    StopCommand(StopCommand const&);
    StopCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StopCommand@@UEAA@XZ
    virtual ~StopCommand() = default;

    // vIndex: 2, symbol: ?execute@StopCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@StopCommand@@SAXAEAVCommandRegistry@@AEAVDedicatedServer@@@Z
    MCAPI static void setup(class CommandRegistry& registry, class DedicatedServer& server);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?mServer@StopCommand@@0PEAVDedicatedServer@@EA
    MCAPI static class DedicatedServer* mServer;

    // NOLINTEND
};
