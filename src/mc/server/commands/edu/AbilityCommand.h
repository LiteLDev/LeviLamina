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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~AbilityCommand();

    // vIndex: 2, symbol: ?execute@AbilityCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@AbilityCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};
