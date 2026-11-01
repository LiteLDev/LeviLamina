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

    virtual ::EventResult onObjectiveRemoved(::std::string const& objective);

    virtual ::EventResult onScoreboardIdentityRemoved(::ScoreboardId const& id);

    virtual ::EventResult onScoreChanged(::ScoreboardId const& id, ::std::string const& objective, int score);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onObjectiveAdded(::std::string const&);

    MCNAPI ::EventResult $onObjectiveRemoved(::std::string const& objective);

    MCNAPI ::EventResult $onScoreboardIdentityRemoved(::ScoreboardId const& id);

    MCNAPI ::EventResult $onScoreChanged(::ScoreboardId const& id, ::std::string const& objective, int score);


    // NOLINTEND
};
