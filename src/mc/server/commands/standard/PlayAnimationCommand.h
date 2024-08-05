#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/MolangVersion.h"
#include "mc/world/level/Command.h"

class PlayAnimationCommand : public ::Command {
public:
    // prevent constructor by default
    PlayAnimationCommand& operator=(PlayAnimationCommand const&);
    PlayAnimationCommand(PlayAnimationCommand const&);
    PlayAnimationCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayAnimationCommand();

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static ::MolangVersion const mStopExpressionVersion;

    // NOLINTEND
};
