#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameRuleId {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMERULEID
public:
    GameRuleId& operator=(GameRuleId const&) = delete;
    GameRuleId(GameRuleId const&)            = delete;
    GameRuleId()                             = delete;
#endif

public:
    /**
     * @symbol ??0GameRuleId\@\@QEAA\@H\@Z
     */
    MCAPI GameRuleId(int);
};
