#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventCoordinator.h"

// auto generated forward declare list
// clang-format off
class ScoreboardEventListener;
struct ScoreboardId;
// clang-format on

class ScoreboardEventCoordinator : public ::EventCoordinator<::ScoreboardEventListener> {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void sendOnObjectiveAdded(::std::string const& objective);

    MCAPI void sendOnObjectiveRemoved(::std::string const& objective);

    MCAPI void sendOnScoreChanged(::ScoreboardId const& id, ::std::string const& objective, int score);
    // NOLINTEND
};
