#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class CameraShakeCommand : public ::Command {
public:
    // prevent constructor by default
    CameraShakeCommand& operator=(CameraShakeCommand const&);
    CameraShakeCommand(CameraShakeCommand const&);
    CameraShakeCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CameraShakeCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _executeAdd(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void _executeStop(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
