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
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::std::string const& getName() const;
#endif

    MCAPI ~TimeMarker();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint const& MAX_NAME_LENGTH();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
