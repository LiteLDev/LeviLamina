#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class InsideBlockEventMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>      mOnEnteredBlock;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>      mOnExitedBlock;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Block const*>> mBlock;
    ::ll::TypedStorage<1, 1, bool>                            mWatchEnter;
    ::ll::TypedStorage<1, 1, bool>                            mWatchExit;
    ::ll::TypedStorage<1, 1, bool>                            mCurrentlyInside;
    ::ll::TypedStorage<1, 1, bool>                            mWasInside;
    ::ll::TypedStorage<1, 1, bool>                            mIgnoreStates;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~InsideBlockEventMap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
