#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/AgentAnimationPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct AgentAnimationPacketInfo;
// clang-format on

class AgentAnimationPacket
: public ::SerializedPayloadPacket<::AgentAnimationPacketInfo, ::AgentAnimationPacketPayload> {
public:
    // AgentAnimationPacket inner types define
    using PayloadType = ::AgentAnimationPacketPayload;

    using PacketInfo = ::AgentAnimationPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AgentAnimationPacket() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
