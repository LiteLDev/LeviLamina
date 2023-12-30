#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class DayLockCommand : public ::Command {
public:
    // prevent constructor by default
    DayLockCommand& operator=(DayLockCommand const&);
    DayLockCommand(DayLockCommand const&);
    DayLockCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DayLockCommand@@UEAA@XZ
    virtual ~DayLockCommand() = default;

    // vIndex: 2, symbol: ?execute@DayLockCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@DayLockCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
