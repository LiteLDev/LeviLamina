#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

class PlayerRespawnTelemetryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>   mSearchTimeMS;
    ::ll::TypedStorage<4, 4, uint>   mLongJumpCount;
    ::ll::TypedStorage<4, 4, uint>   mShortJumpCount;
    ::ll::TypedStorage<8, 8, double> mJumpDistance;
    ::ll::TypedStorage<4, 4, uint>   mPositionSourceType;
    ::ll::TypedStorage<1, 1, bool>   mChangedDimension;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void WriteEventData(::Social::Events::Event& event) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& mEventName();
    // NOLINTEND
};
