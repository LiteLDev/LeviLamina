#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"
#include "mc/world/events/ScoreboardEventListener.h"

// auto generated forward declare list
// clang-format off
class Player;
class SubscribedObjectives;
struct ScoreboardId;
// clang-format on

class PlayerScoreboardEventListener : public ::ScoreboardEventListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ScoreboardId, ::SubscribedObjectives>> mSubscribedObjectives;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual ::EventResult
    onScoreChanged(::ScoreboardId const& id, ::std::string const& objective, int score) /*override*/;

    // vIndex: 0
    virtual ~PlayerScoreboardEventListener() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SubscribedObjectives& getPlayerSubscriptions(::ScoreboardId const& id, ::Player const& player);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onScoreChanged(::ScoreboardId const& id, ::std::string const& objective, int score);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
