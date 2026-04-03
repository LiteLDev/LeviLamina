#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

class TimeMarker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>      mName;
    ::ll::TypedStorage<4, 4, int>                  mTime;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mPeriod;
    // NOLINTEND

public:
    // prevent constructor by default
    TimeMarker& operator=(TimeMarker const&);
    TimeMarker();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TimeMarker(::TimeMarker const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TimeMarker const&);
    // NOLINTEND
};
