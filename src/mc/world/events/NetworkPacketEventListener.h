#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Packet;
class PacketHeader;
// clang-format on

class NetworkPacketEventListener {
public:
    // prevent constructor by default
    NetworkPacketEventListener& operator=(NetworkPacketEventListener const&);
    NetworkPacketEventListener(NetworkPacketEventListener const&);
    NetworkPacketEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkPacketEventListener() = default;

    // vIndex: 1
    virtual ::EventResult onPacketReceivedFrom(::PacketHeader const&, ::Packet const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
