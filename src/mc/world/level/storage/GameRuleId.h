#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameRuleId {

public:
    // prevent constructor by default
    GameRuleId& operator=(GameRuleId const&) = delete;
    GameRuleId(GameRuleId const&)            = delete;
    GameRuleId()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0GameRuleId\@\@QEAA\@H\@Z
     */
    MCAPI GameRuleId(int);
    // NOLINTEND
};
