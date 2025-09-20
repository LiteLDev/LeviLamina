#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/CameraAimAssistPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct CameraAimAssistPacketInfo;
// clang-format on

class CameraAimAssistPacket
: public ::SerializedPayloadPacket<::CameraAimAssistPacketInfo, ::CameraAimAssistPacketPayload> {
public:
    // CameraAimAssistPacket inner types define
    using PayloadType = ::CameraAimAssistPacketPayload;

    using PacketInfo = ::CameraAimAssistPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CameraAimAssistPacket() /*override*/;
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
