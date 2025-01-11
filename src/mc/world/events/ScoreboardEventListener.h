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
    // vIndex: 0
    virtual ~ScoreboardEventListener();

    // vIndex: 1
    virtual ::EventResult onObjectiveAdded(::std::string const&);

    // vIndex: 2
    virtual ::EventResult onObjectiveRemoved(::std::string const&);

    // vIndex: 3
    virtual ::EventResult onScoreboardIdentityRemoved(::ScoreboardId const&);

    // vIndex: 4
    virtual ::EventResult onScoreChanged(::ScoreboardId const&, ::std::string const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onObjectiveAdded(::std::string const&);

    MCAPI ::EventResult $onObjectiveRemoved(::std::string const&);

    MCAPI ::EventResult $onScoreboardIdentityRemoved(::ScoreboardId const&);

    MCAPI ::EventResult $onScoreChanged(::ScoreboardId const&, ::std::string const&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
