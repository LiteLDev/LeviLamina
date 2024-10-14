#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"
#include "mc/util/rotation_command_utils/FacingResult.h"

class SummonCommand : public ::ServerCommand {
public:
    // prevent constructor by default
    SummonCommand& operator=(SummonCommand const&);
    SummonCommand(SummonCommand const&);
    SummonCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SummonCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI ::RotationCommandUtils::FacingResult
    _getFacingDirection(class CommandOrigin const& origin, class CommandOutput& output, class Vec3& faceTarget) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
