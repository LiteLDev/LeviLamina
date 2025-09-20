#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/CameraShakePacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct CameraShakePacketInfo;
// clang-format on

class CameraShakePacket : public ::SerializedPayloadPacket<::CameraShakePacketInfo, ::CameraShakePacketPayload> {
public:
    // CameraShakePacket inner types define
    using PayloadType = ::CameraShakePacketPayload;

    using PacketInfo = ::CameraShakePacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CameraShakePacket() /*override*/;
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
