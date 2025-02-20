#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/PlayerScoreSetFunction.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Objective;
class Scoreboard;
struct ActorUniqueID;
struct ScoreboardId;
// clang-format on

class ScoreboardIdentityRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>            mObjectiveReferences;
    ::ll::TypedStorage<8, 16, ::ScoreboardId> mScoreboardId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string const& getName(::std::function<::std::string const&(::ActorUniqueID)> const& playerNameResolver
    ) const;

    MCAPI bool modifyScoreInObjective(int& result, ::Objective& objective, int score, ::PlayerScoreSetFunction fn);

    MCAPI bool removeFromObjective(::Scoreboard& scoreboard, ::Objective& objective);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::CompoundTag> serialize(::ScoreboardIdentityRef const& toSave);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ScoreboardIdentityRef const& Undefined();
    // NOLINTEND
};
