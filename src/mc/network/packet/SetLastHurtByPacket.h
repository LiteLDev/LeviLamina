#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SetLastHurtByPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct SetLastHurtByPacketInfo;
// clang-format on

class SetLastHurtByPacket : public ::SerializedPayloadPacket<::SetLastHurtByPacketInfo, ::SetLastHurtByPacketPayload> {
public:
    // SetLastHurtByPacket inner types define
    using PayloadType = ::SetLastHurtByPacketPayload;

    using PacketInfo = ::SetLastHurtByPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetLastHurtByPacket() /*override*/;
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
