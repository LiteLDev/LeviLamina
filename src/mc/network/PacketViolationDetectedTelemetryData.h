#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PacketViolationDetectedTelemetryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk42dcb4;
    ::ll::UntypedStorage<8, 32>  mUnkb55dfa;
    ::ll::UntypedStorage<4, 4>   mUnk38d1a1;
    ::ll::UntypedStorage<4, 4>   mUnkfa3960;
    ::ll::UntypedStorage<8, 176> mUnkec8fe0;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketViolationDetectedTelemetryData& operator=(PacketViolationDetectedTelemetryData const&);
    PacketViolationDetectedTelemetryData(PacketViolationDetectedTelemetryData const&);
    PacketViolationDetectedTelemetryData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PacketViolationDetectedTelemetryData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& mEventName();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
