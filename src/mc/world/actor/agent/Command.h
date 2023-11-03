#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentCommands {

class Command {
public:
    // prevent constructor by default
    Command& operator=(Command const&);
    Command(Command const&);
    Command();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?execute@Command@AgentCommands@@UEAAXXZ
    virtual void execute();

    // vIndex: 2, symbol: ?isDone@TillCommand@AgentCommands@@UEAA_NXZ
    virtual bool isDone() = 0;

    // vIndex: 3, symbol: ?tick@Command@AgentCommands@@UEAAXXZ
    virtual void tick();

    // vIndex: 4, symbol: ?fireCommandDoneEvent@Command@AgentCommands@@UEAAXXZ
    virtual void fireCommandDoneEvent();

    // symbol: ??1Command@AgentCommands@@UEAA@XZ
    MCVAPI ~Command();

    // NOLINTEND
};

}; // namespace AgentCommands
