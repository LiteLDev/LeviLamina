#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class ImmutableWorldCommand : public ::Command {
public:
    // prevent constructor by default
    ImmutableWorldCommand& operator=(ImmutableWorldCommand const&);
    ImmutableWorldCommand(ImmutableWorldCommand const&);
    ImmutableWorldCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ImmutableWorldCommand@@UEAA@XZ
    virtual ~ImmutableWorldCommand() = default;

    // vIndex: 2, symbol: ?execute@ImmutableWorldCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@ImmutableWorldCommand@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
