#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/world/level/clock/TimeMarkerData.h"

// auto generated forward declare list
// clang-format off
struct TimeMarkerData;
// clang-format on

struct WorldClockData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                           mId;
    ::ll::TypedStorage<8, 32, ::std::string>                   mName;
    ::ll::TypedStorage<4, 4, int>                              mTime;
    ::ll::TypedStorage<1, 1, bool>                             mIsPaused;
    ::ll::TypedStorage<8, 24, ::std::vector<::TimeMarkerData>> mTimeMarkers;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldClockData& operator=(WorldClockData const&);
    WorldClockData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldClockData(::WorldClockData const&);

    MCAPI bool operator==(::WorldClockData const& rhs) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::WorldClockData const&);
    // NOLINTEND
};
