#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class SetBlockCommand : public ::Command {
public:
    // prevent constructor by default
    SetBlockCommand& operator=(SetBlockCommand const&);
    SetBlockCommand(SetBlockCommand const&);
    SetBlockCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SetBlockCommand@@UEAA@XZ
    virtual ~SetBlockCommand() = default;

    // vIndex: 2, symbol: ?execute@SetBlockCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@SetBlockCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
