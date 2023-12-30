#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ClearCommand : public ::Command {
public:
    // prevent constructor by default
    ClearCommand& operator=(ClearCommand const&);
    ClearCommand(ClearCommand const&);
    ClearCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ClearCommand@@UEAA@XZ
    virtual ~ClearCommand() = default;

    // vIndex: 2, symbol: ?execute@ClearCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@ClearCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
