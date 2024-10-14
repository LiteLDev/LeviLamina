#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class RideCommand : public ::Command {
public:
    // prevent constructor by default
    RideCommand& operator=(RideCommand const&);
    RideCommand(RideCommand const&);
    RideCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RideCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void evictPassengers(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void startRiding(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void stopRiding(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void summonPassenger(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void summonVehicle(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
