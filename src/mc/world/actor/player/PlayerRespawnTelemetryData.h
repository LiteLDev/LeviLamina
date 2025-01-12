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
    ::ll::UntypedStorage<4, 4> mUnk5667ce;
    ::ll::UntypedStorage<4, 4> mUnk3f14d4;
    ::ll::UntypedStorage<4, 4> mUnk361052;
    ::ll::UntypedStorage<8, 8> mUnkc2107a;
    ::ll::UntypedStorage<4, 4> mUnk6cf02f;
    ::ll::UntypedStorage<1, 1> mUnkb612bb;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerRespawnTelemetryData& operator=(PlayerRespawnTelemetryData const&);
    PlayerRespawnTelemetryData(PlayerRespawnTelemetryData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerRespawnTelemetryData();

    MCAPI void WriteEventData(::Social::Events::Event& event) const;

    MCFOLD void setChangedDimension(bool changed);

    MCAPI void setJumpDistance(double blockDistance);

    MCFOLD void setLongJumpCount(uint jumps);

    MCFOLD void setPositionSourceType(uint spawnPositionSource);

    MCAPI void setSearchTime(double seconds);

    MCFOLD void setShortJumpCount(uint jumps);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& mEventName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
