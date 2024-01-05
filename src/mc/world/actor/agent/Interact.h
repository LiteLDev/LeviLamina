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
    // vIndex: 0, symbol: __gen_??1Interact@AgentCommands@@UEAA@XZ
    virtual ~Interact() = default;

    // vIndex: 2, symbol: ?execute@Interact@AgentCommands@@EEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@Interact@AgentCommands@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};

}; // namespace AgentCommands
