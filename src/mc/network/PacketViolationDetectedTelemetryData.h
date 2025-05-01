#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

class PacketViolationDetectedTelemetryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk42dcb4;
    ::ll::UntypedStorage<8, 32>  mUnkb55dfa;
    ::ll::UntypedStorage<4, 4>   mUnk38d1a1;
    ::ll::UntypedStorage<4, 4>   mUnkfa3960;
    ::ll::UntypedStorage<8, 160> mUnkec8fe0;
    // NOLINTEND

public:
    // prevent constructor by default
    PacketViolationDetectedTelemetryData& operator=(PacketViolationDetectedTelemetryData const&);
    PacketViolationDetectedTelemetryData(PacketViolationDetectedTelemetryData const&);
    PacketViolationDetectedTelemetryData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void WriteEventData(::Social::Events::Event& event) const;

    MCNAPI ~PacketViolationDetectedTelemetryData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& mEventName();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
