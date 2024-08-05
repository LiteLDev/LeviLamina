#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class CloseWebSocketCommand : public ::Command {
public:
    // prevent constructor by default
    CloseWebSocketCommand& operator=(CloseWebSocketCommand const&);
    CloseWebSocketCommand(CloseWebSocketCommand const&);
    CloseWebSocketCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CloseWebSocketCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput&) const;

    MCAPI static void setup(class CommandRegistry& registry, class IMinecraftApp& app);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class IMinecraftApp* mApp;

    // NOLINTEND
};
