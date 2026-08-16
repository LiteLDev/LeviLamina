#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
struct TimeMarkerData;
// clang-format on

class TimeMarker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>      mName;
    ::ll::TypedStorage<4, 4, int>                  mTime;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mPeriod;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    TimeMarker();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit TimeMarker(::TimeMarkerData const& data);
#endif

    MCAPI ::TimeMarkerData toData() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::TimeMarkerData const& data);
#endif
    // NOLINTEND
};
