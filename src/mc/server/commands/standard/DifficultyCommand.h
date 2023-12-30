#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class DifficultyCommand : public ::Command {
public:
    // prevent constructor by default
    DifficultyCommand& operator=(DifficultyCommand const&);
    DifficultyCommand(DifficultyCommand const&);
    DifficultyCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DifficultyCommand@@UEAA@XZ
    virtual ~DifficultyCommand() = default;

    // vIndex: 2, symbol: ?execute@DifficultyCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@DifficultyCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
