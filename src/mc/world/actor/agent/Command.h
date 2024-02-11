#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/agent/Direction.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace AgentCommands {

class Command {
public:
    // prevent constructor by default
    Command& operator=(Command const&);
    Command(Command const&);
    Command();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Command@AgentCommands@@UEAA@XZ
    virtual ~Command();

    // vIndex: 1, symbol: ?execute@Command@AgentCommands@@UEAAXXZ
    virtual void execute();

    // vIndex: 2, symbol: ?isDone@AttackCommand@AgentCommands@@UEAA_NXZ
    virtual bool isDone() = 0;

    // vIndex: 3, symbol: ?tick@Command@AgentCommands@@UEAAXXZ
    virtual void tick();

    // vIndex: 4, symbol: ?fireCommandDoneEvent@Command@AgentCommands@@UEAAXXZ
    virtual void fireCommandDoneEvent();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_getNextPosFromDirection@Command@AgentCommands@@IEAA?AVVec3@@W4Direction@AgentComponents@@@Z
    MCAPI class Vec3 _getNextPosFromDirection(::AgentComponents::Direction dir);

    // NOLINTEND
};

}; // namespace AgentCommands
