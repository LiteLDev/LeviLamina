#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class ParticleCommand : public ::Command {
public:
    // prevent constructor by default
    ParticleCommand& operator=(ParticleCommand const&);
    ParticleCommand(ParticleCommand const&);
    ParticleCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ParticleCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};
