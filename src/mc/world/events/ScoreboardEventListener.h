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
    // vIndex: 0
    virtual ~ScoreboardEventListener();

    // vIndex: 1
    virtual ::EventResult onObjectiveAdded(std::string const&);

    // vIndex: 2
    virtual ::EventResult onObjectiveRemoved(std::string const&);

    // vIndex: 3
    virtual ::EventResult onScoreboardIdentityRemoved(struct ScoreboardId const&);

    // vIndex: 4
    virtual ::EventResult onScoreChanged(struct ScoreboardId const&, std::string const&, int);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI ::EventResult onObjectiveAdded$(std::string const&);

    MCAPI ::EventResult onObjectiveRemoved$(std::string const&);

    MCAPI ::EventResult onScoreChanged$(struct ScoreboardId const&, std::string const&, int);

    MCAPI ::EventResult onScoreboardIdentityRemoved$(struct ScoreboardId const&);

    // NOLINTEND
};
