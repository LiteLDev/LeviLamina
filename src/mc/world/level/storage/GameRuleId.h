#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameRuleId {
public:
    // prevent constructor by default
    GameRuleId& operator=(GameRuleId const&);
    GameRuleId(GameRuleId const&);
    GameRuleId();

public:
    // NOLINTBEGIN
    // symbol: ??0GameRuleId@@QEAA@H@Z
    MCAPI explicit GameRuleId(int);

    // NOLINTEND
};
