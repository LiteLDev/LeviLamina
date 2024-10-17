#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class LocateCommand : public ::Command {
public:
    // prevent constructor by default
    LocateCommand& operator=(LocateCommand const&);
    LocateCommand(LocateCommand const&);
    LocateCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LocateCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _executeLocateBiome(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void _executeLocateStructure(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
