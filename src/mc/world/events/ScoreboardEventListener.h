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
    virtual ~ScoreboardEventListener();

    virtual ::EventResult onObjectiveAdded(::std::string const&);

    virtual ::EventResult onObjectiveRemoved(::std::string const&);

    virtual ::EventResult onScoreboardIdentityRemoved(::ScoreboardId const&);

    virtual ::EventResult onScoreChanged(::ScoreboardId const&, ::std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onObjectiveAdded(::std::string const&);

    MCNAPI ::EventResult $onObjectiveRemoved(::std::string const&);

    MCNAPI ::EventResult $onScoreboardIdentityRemoved(::ScoreboardId const&);

    MCNAPI ::EventResult $onScoreChanged(::ScoreboardId const&, ::std::string const&, int);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
