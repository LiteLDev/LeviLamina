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

class Inspect : public ::Command {
public:
    // prevent constructor by default
    Inspect& operator=(Inspect const&);
    Inspect(Inspect const&);
    Inspect();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1Inspect@AgentCommands@@UEAA@XZ
    virtual ~Inspect() = default;

    // vIndex: 2, symbol: ?execute@Inspect@AgentCommands@@EEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;

    // symbol: ?setup@Inspect@AgentCommands@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void setup(class CommandRegistry&);

    // NOLINTEND
};

}; // namespace AgentCommands
