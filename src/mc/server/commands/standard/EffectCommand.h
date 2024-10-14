#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class EffectCommand : public ::Command {
public:
    // prevent constructor by default
    EffectCommand& operator=(EffectCommand const&);
    EffectCommand(EffectCommand const&);
    EffectCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EffectCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void clear(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
