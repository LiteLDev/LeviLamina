#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

// auto generated forward declare list
// clang-format off
class Command;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

namespace AgentCommands {

class Interact : public ::Command {
public:
    // prevent constructor by default
    Interact& operator=(Interact const&);
    Interact(Interact const&);
    Interact();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Interact() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};

}; // namespace AgentCommands
