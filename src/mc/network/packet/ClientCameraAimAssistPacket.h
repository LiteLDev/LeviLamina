#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ClientCameraAimAssistPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct ClientCameraAimAssistPacketInfo;
// clang-format on

class ClientCameraAimAssistPacket
: public ::SerializedPayloadPacket<::ClientCameraAimAssistPacketInfo, ::ClientCameraAimAssistPacketPayload> {
public:
    // ClientCameraAimAssistPacket inner types define
    using PayloadType = ::ClientCameraAimAssistPacketPayload;

    using PacketInfo = ::ClientCameraAimAssistPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientCameraAimAssistPacket() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
