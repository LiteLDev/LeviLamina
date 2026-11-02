#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ticking/TickingAreaLoadMode.h"

struct TickingAreaDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>           mOrigin;
    ::ll::TypedStorage<4, 12, ::BlockPos>           mMax;
    ::ll::TypedStorage<4, 4, uint>                  mRadius;
    ::ll::TypedStorage<8, 32, ::std::string>        mName;
    ::ll::TypedStorage<1, 1, bool>                  mIsCircle;
    ::ll::TypedStorage<1, 1, ::TickingAreaLoadMode> mLoadMode;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string asString() const;

    MCNAPI ~TickingAreaDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
