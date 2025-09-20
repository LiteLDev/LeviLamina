#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/CameraPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct CameraPacketInfo;
// clang-format on

class CameraPacket : public ::SerializedPayloadPacket<::CameraPacketInfo, ::CameraPacketPayload> {
public:
    // CameraPacket inner types define
    using PayloadType = ::CameraPacketPayload;

    using PacketInfo = ::CameraPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CameraPacket() /*override*/;
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
