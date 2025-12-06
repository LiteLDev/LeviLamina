#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/PlayerScoreSetFunction.h"
#include "mc/world/scores/ScoreboardId.h"
#include "mc/world/scores/ScoreboardOperationResult.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Objective;
struct ActorUniqueID;
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
    MCNAPI ::std::string const&
    getName(::std::function<::std::string const&(::ActorUniqueID)> const& playerNameResolver) const;

    MCNAPI ::ScoreboardOperationResult
    modifyScoreInObjective(int& result, ::Objective& objective, int score, ::PlayerScoreSetFunction fn);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::CompoundTag> serialize(::ScoreboardIdentityRef const& toSave);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ScoreboardIdentityRef const& Undefined();
    // NOLINTEND
};
