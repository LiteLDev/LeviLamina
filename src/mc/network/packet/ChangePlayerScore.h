#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/PlayerScoreboardId.h"
#include "mc/world/scores/ScoreboardId.h"

struct ChangePlayerScore {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ScoreboardId>      mScoreboardId;
    ::ll::TypedStorage<8, 32, ::std::string>       mObjectiveName;
    ::ll::TypedStorage<4, 4, int>                  mScoreValue;
    ::ll::TypedStorage<8, 8, ::PlayerScoreboardId> mPlayerId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI ~ChangePlayerScore();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCFOLD void $dtor();
#endif
    // NOLINTEND
};
