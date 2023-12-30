#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class AbilityCommand : public ::Command {
public:
    // prevent constructor by default
    AbilityCommand& operator=(AbilityCommand const&);
    AbilityCommand(AbilityCommand const&);
    AbilityCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AbilityCommand@@UEAA@XZ
    virtual ~AbilityCommand() = default;

    // vIndex: 2, symbol: ?execute@AbilityCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@AbilityCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
