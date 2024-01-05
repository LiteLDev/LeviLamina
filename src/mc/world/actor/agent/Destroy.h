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

class Destroy : public ::Command {
public:
    // prevent constructor by default
    Destroy& operator=(Destroy const&);
    Destroy(Destroy const&);
    Destroy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1Destroy@AgentCommands@@UEAA@XZ
    virtual ~Destroy() = default;

    // vIndex: 2, symbol: ?execute@Destroy@AgentCommands@@EEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?setup@Destroy@AgentCommands@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND
};

}; // namespace AgentCommands
