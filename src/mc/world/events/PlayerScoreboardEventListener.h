#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/events/SubscribedObjectives.h"
#include "mc/world/scores/ScoreboardId.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ScoreboardEventListener.h"

class PlayerScoreboardEventListener : public ::ScoreboardEventListener {
public:
    std::unordered_map<ScoreboardId, SubscribedObjectives> mSubscribedObjectives;

public:
    // prevent constructor by default
    PlayerScoreboardEventListener& operator=(PlayerScoreboardEventListener const&);
    PlayerScoreboardEventListener(PlayerScoreboardEventListener const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PlayerScoreboardEventListener@@UEAA@XZ
    virtual ~PlayerScoreboardEventListener();

    // vIndex: 4, symbol:
    // ?onScoreChanged@PlayerScoreboardEventListener@@UEAA?AW4EventResult@@AEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    virtual ::EventResult onScoreChanged(struct ScoreboardId const& id, std::string const& objective, int score);

    // symbol: ??0PlayerScoreboardEventListener@@QEAA@XZ
    MCAPI PlayerScoreboardEventListener();

    // symbol:
    // ?getPlayerSubscriptions@PlayerScoreboardEventListener@@QEAAAEAVSubscribedObjectives@@AEBUScoreboardId@@AEBVPlayer@@@Z
    MCAPI class SubscribedObjectives& getPlayerSubscriptions(struct ScoreboardId const& id, class Player const& player);

    // symbol: ?removePlayerSubscriptions@PlayerScoreboardEventListener@@QEAAXAEBUScoreboardId@@@Z
    MCAPI void removePlayerSubscriptions(struct ScoreboardId const& id);

    // NOLINTEND
};
