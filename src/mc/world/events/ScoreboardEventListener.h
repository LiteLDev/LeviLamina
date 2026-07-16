#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct ScoreboardId;
// clang-format on

class ScoreboardEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScoreboardEventListener() = default;

    virtual ::EventResult onObjectiveAdded(::std::string const&);

    virtual ::EventResult onObjectiveRemoved(::std::string const&);

    virtual ::EventResult onScoreboardIdentityRemoved(::ScoreboardId const&);

    virtual ::EventResult onScoreChanged(::ScoreboardId const& id, ::std::string const& objective, int score);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::EventResult $onObjectiveAdded(::std::string const&);

    MCFOLD ::EventResult $onObjectiveRemoved(::std::string const&);

    MCFOLD ::EventResult $onScoreboardIdentityRemoved(::ScoreboardId const&);

    MCFOLD ::EventResult $onScoreChanged(::ScoreboardId const& id, ::std::string const& objective, int score);


    // NOLINTEND
};
