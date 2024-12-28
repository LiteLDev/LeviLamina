#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ScoreboardId;
// clang-format on

struct PlayerScore {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk85f5a1;
    ::ll::UntypedStorage<4, 4>  mUnk8a5fe1;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerScore& operator=(PlayerScore const&);
    PlayerScore(PlayerScore const&);
    PlayerScore();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScoreboardId const& getId() const;
    // NOLINTEND
};
