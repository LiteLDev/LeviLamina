#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

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
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
