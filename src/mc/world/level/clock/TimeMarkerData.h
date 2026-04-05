#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TimeMarkerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>               mId;
    ::ll::TypedStorage<8, 32, ::std::string>       mName;
    ::ll::TypedStorage<4, 4, int>                  mTime;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mPeriod;
    // NOLINTEND

public:
    // prevent constructor by default
    TimeMarkerData(TimeMarkerData const&);
    TimeMarkerData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::TimeMarkerData& operator=(::TimeMarkerData&&);

    MCAPI ::TimeMarkerData& operator=(::TimeMarkerData const&);

    MCAPI bool operator==(::TimeMarkerData const&) const;
    // NOLINTEND
};
