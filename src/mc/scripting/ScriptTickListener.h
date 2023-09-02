#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

class ScriptTickListener {
public:
    // prevent constructor by default
    ScriptTickListener& operator=(ScriptTickListener const&) = delete;
    ScriptTickListener(ScriptTickListener const&)            = delete;
    ScriptTickListener()                                     = delete;

public:
    // NOLINTBEGIN
    // symbol: ?onLevelRemovedPlayer@ScriptTickListener@@UEAA?AW4EventResult@@AEAVLevel@@AEAVPlayer@@@Z
    MCVAPI ::EventResult onLevelRemovedPlayer(class Level&, class Player&);

    // symbol: ?onLevelTickEnd@ScriptTickListener@@UEAAXXZ
    MCVAPI void onLevelTickEnd();

    // NOLINTEND
};
