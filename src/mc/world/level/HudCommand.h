#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class HudCommand : public ::Command {
public:
    // prevent constructor by default
    HudCommand& operator=(HudCommand const&);
    HudCommand(HudCommand const&);
    HudCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HudCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};
