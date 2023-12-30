#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class CloneCommand : public ::Command {
public:
    // prevent constructor by default
    CloneCommand& operator=(CloneCommand const&);
    CloneCommand(CloneCommand const&);
    CloneCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CloneCommand@@UEAA@XZ
    virtual ~CloneCommand() = default;

    // vIndex: 2, symbol: ?execute@CloneCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@CloneCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
