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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScoreboardEventCoordinator() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void sendOnObjectiveAdded(::std::string const& objective);

    MCAPI void sendOnObjectiveRemoved(::std::string const& objective);

    MCAPI void sendOnScoreChanged(::ScoreboardId const& id, ::std::string const& objective, int score);

    MCAPI void sendOnScoreboardIdentityRemoved(::ScoreboardId const& id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
