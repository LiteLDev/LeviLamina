#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

// auto generated forward declare list
// clang-format off
class Command;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
// clang-format on

namespace AgentCommands {

class Inspect : public ::Command {
public:
    // prevent constructor by default
    Inspect& operator=(Inspect const&);
    Inspect(Inspect const&);
    Inspect();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Inspect() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};

}; // namespace AgentCommands
