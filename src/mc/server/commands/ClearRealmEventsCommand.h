#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

class ClearRealmEventsCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    ClearRealmEventsCommand& operator=(ClearRealmEventsCommand const&);
    ClearRealmEventsCommand(ClearRealmEventsCommand const&);
    ClearRealmEventsCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ClearRealmEventsCommand@@UEAA@XZ
    virtual ~ClearRealmEventsCommand() = default;

    // vIndex: 2, symbol: ?execute@ClearRealmEventsCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@ClearRealmEventsCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?mServer@ClearRealmEventsCommand@@0PEAVDedicatedServer@@EA
    MCAPI static class DedicatedServer* mServer;

    // NOLINTEND
};
