#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    PlayerRespawnTelemetryData();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& mEventName();
    // NOLINTEND
};
