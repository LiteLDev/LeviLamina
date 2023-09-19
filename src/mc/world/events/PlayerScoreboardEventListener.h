#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ScoreboardEventListener.h"

class PlayerScoreboardEventListener : public ::ScoreboardEventListener {
public:
    // prevent constructor by default
    PlayerScoreboardEventListener& operator=(PlayerScoreboardEventListener const&);
    PlayerScoreboardEventListener(PlayerScoreboardEventListener const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 4, symbol:
    // ?onScoreChanged@PlayerScoreboardEventListener@@UEAA?AW4EventResult@@AEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual ::EventResult onScoreChanged(struct ScoreboardId const&, std::string const&, int);

    // symbol: ??1PlayerScoreboardEventListener@@UEAA@XZ
    MCVAPI ~PlayerScoreboardEventListener();

    // symbol: ??0PlayerScoreboardEventListener@@QEAA@XZ
    MCAPI PlayerScoreboardEventListener();

    // symbol:
    // ?getPlayerSubscriptions@PlayerScoreboardEventListener@@QEAAAEAVSubscribedObjectives@@AEBUScoreboardId@@AEBVPlayer@@@Z
    MCAPI class SubscribedObjectives& getPlayerSubscriptions(struct ScoreboardId const&, class Player const&);

    // symbol: ?removePlayerSubscriptions@PlayerScoreboardEventListener@@QEAAXAEBUScoreboardId@@@Z
    MCAPI void removePlayerSubscriptions(struct ScoreboardId const&);

    // NOLINTEND
};
