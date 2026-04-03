#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TimeMarkerData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk35bc1b;
    ::ll::UntypedStorage<8, 32> mUnka3ee86;
    ::ll::UntypedStorage<4, 4>  mUnk3deeed;
    ::ll::UntypedStorage<4, 8>  mUnk40b1a1;
    // NOLINTEND

public:
    // prevent constructor by default
    TimeMarkerData(TimeMarkerData const&);
    TimeMarkerData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::TimeMarkerData& operator=(::TimeMarkerData&&);

    MCNAPI ::TimeMarkerData& operator=(::TimeMarkerData const&);

    MCNAPI bool operator==(::TimeMarkerData const&) const;
    // NOLINTEND
};
