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
    // vIndex: 0
    virtual ~ClearRealmEventsCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class DedicatedServer* mServer;

    // NOLINTEND
};
