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
    // vIndex: 0, symbol: __gen_??1GameModeCommand@@UEAA@XZ
    virtual ~GameModeCommand() = default;

    // vIndex: 2, symbol: ?execute@GameModeCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@GameModeCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
