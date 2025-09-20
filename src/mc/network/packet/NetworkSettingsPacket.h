#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/NetworkSettingsPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct NetworkSettingsPacketInfo;
// clang-format on

class NetworkSettingsPacket
: public ::SerializedPayloadPacket<::NetworkSettingsPacketInfo, ::NetworkSettingsPacketPayload> {
public:
    // NetworkSettingsPacket inner types define
    using PayloadType = ::NetworkSettingsPacketPayload;

    using PacketInfo = ::NetworkSettingsPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkSettingsPacket() /*override*/;
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
