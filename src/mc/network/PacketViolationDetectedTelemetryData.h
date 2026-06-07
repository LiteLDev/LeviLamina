#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/PacketViolationResponse.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
namespace Social::Events { class Event; }
// clang-format on

class PacketViolationDetectedTelemetryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk42dcb4;
    ::ll::UntypedStorage<8, 32>  mUnk6ab08a;
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
    MCNAPI PacketViolationDetectedTelemetryData(
        uint64                     readResult,
        ::std::string              readResultContext,
        ::PacketViolationResponse  violationResponse,
        ::MinecraftPacketIds       violatingPacketId,
        ::NetworkIdentifier const& netId
    );

    MCNAPI void WriteEventData(::Social::Events::Event& event) const;

    MCNAPI ~PacketViolationDetectedTelemetryData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& mEventName();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        uint64                     readResult,
        ::std::string              readResultContext,
        ::PacketViolationResponse  violationResponse,
        ::MinecraftPacketIds       violatingPacketId,
        ::NetworkIdentifier const& netId
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
