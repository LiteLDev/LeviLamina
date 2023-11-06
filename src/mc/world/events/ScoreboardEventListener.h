#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

class ScoreboardEventListener {
public:
    // prevent constructor by default
    ScoreboardEventListener& operator=(ScoreboardEventListener const&);
    ScoreboardEventListener(ScoreboardEventListener const&);
    ScoreboardEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScoreboardEventListener@@UEAA@XZ
    virtual ~ScoreboardEventListener();

    // vIndex: 1, symbol:
    // ?onObjectiveAdded@ScoreboardEventListener@@UEAA?AW4EventResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual ::EventResult onObjectiveAdded(std::string const&);

    // vIndex: 2, symbol:
    // ?onObjectiveRemoved@ScoreboardEventListener@@UEAA?AW4EventResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual ::EventResult onObjectiveRemoved(std::string const&);

    // vIndex: 3, symbol:
    // ?onScoreboardIdentityRemoved@ScoreboardEventListener@@UEAA?AW4EventResult@@AEBUScoreboardId@@@Z
    virtual ::EventResult onScoreboardIdentityRemoved(struct ScoreboardId const&);

    // vIndex: 4, symbol:
    // ?onScoreChanged@ScoreboardEventListener@@UEAA?AW4EventResult@@AEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual ::EventResult onScoreChanged(struct ScoreboardId const&, std::string const&, int);

    // NOLINTEND
};
