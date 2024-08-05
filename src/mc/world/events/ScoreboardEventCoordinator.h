#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/ScoreboardEventListener.h"

class ScoreboardEventCoordinator : public ::EventCoordinator<ScoreboardEventListener> {
public:
    // prevent constructor by default
    ScoreboardEventCoordinator();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScoreboardEventCoordinator();

    MCAPI void sendOnObjectiveAdded(std::string const& objective);

    MCAPI void sendOnObjectiveRemoved(std::string const& objective);

    MCAPI void sendOnScoreChanged(struct ScoreboardId const& id, std::string const& objective, int score);

    MCAPI void sendOnScoreboardIdentityRemoved(struct ScoreboardId const& id);

    // NOLINTEND
};
