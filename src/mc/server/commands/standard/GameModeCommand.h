#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class GameModeCommand : public ::Command {
public:
    // prevent constructor by default
    GameModeCommand& operator=(GameModeCommand const&);
    GameModeCommand(GameModeCommand const&);
    GameModeCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameModeCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
