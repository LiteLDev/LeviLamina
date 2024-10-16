#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class StopSoundCommand : public ::Command {
public:
    // prevent constructor by default
    StopSoundCommand& operator=(StopSoundCommand const&);
    StopSoundCommand(StopSoundCommand const&);
    StopSoundCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StopSoundCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
