#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/world/actor/ActorFilterGroup.h"

struct EntitySubsensorDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2>              mRange;
    ::ll::TypedStorage<4, 4, float>               mYOffset;
    ::ll::TypedStorage<1, 1, bool>                mRequireAll;
    ::ll::TypedStorage<4, 4, int>                 mMinimumCount;
    ::ll::TypedStorage<4, 4, int>                 mMaximumCount;
    ::ll::TypedStorage<4, 4, float>               mCooldownInSeconds;
    ::ll::TypedStorage<8, 32, ::std::string>      mEvent;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mFilter;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~EntitySubsensorDescriptor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
