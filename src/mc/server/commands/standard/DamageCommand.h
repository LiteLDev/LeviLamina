#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandSelectorResults.h"

class DamageCommand : public ::Command {
public:
    // prevent constructor by default
    DamageCommand& operator=(DamageCommand const&);
    DamageCommand(DamageCommand const&);
    DamageCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DamageCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _applyDamage(
        class CommandSelectorResults<class Actor>& targets,
        class ActorDamageSource const&             source,
        class CommandOutput&                       output
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
