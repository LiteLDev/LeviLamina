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
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkPacketEventListener() = default;

    virtual ::EventResult onPacketReceivedFrom(::PacketHeader const&, ::Packet const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
