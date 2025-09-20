#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SetCommandsEnabledPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct SetCommandsEnabledPacketInfo;
// clang-format on

class SetCommandsEnabledPacket
: public ::SerializedPayloadPacket<::SetCommandsEnabledPacketInfo, ::SetCommandsEnabledPacketPayload> {
public:
    // SetCommandsEnabledPacket inner types define
    using PayloadType = ::SetCommandsEnabledPacketPayload;

    using PacketInfo = ::SetCommandsEnabledPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetCommandsEnabledPacket() /*override*/;
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
