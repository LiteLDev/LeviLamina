#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/scores/ScoreboardId.h"

struct ChangeFakePlayerScore {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ScoreboardId> mScoreboardId;
    ::ll::TypedStorage<8, 32, ::std::string>  mObjectiveName;
    ::ll::TypedStorage<4, 4, int>             mScoreValue;
    ::ll::TypedStorage<8, 32, ::std::string>  mFakePlayerName;
    // NOLINTEND

public:
    ChangeFakePlayerScore& operator=(ChangeFakePlayerScore const&) = default;
    ChangeFakePlayerScore() : mScoreValue(0) {}

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChangeFakePlayerScore(::ChangeFakePlayerScore const&);

    MCAPI bool operator==(::ChangeFakePlayerScore const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ChangeFakePlayerScore const&);
    // NOLINTEND
};
