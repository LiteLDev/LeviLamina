#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/MultiplayerSettingsPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct MultiplayerSettingsPacketInfo;
// clang-format on

class MultiplayerSettingsPacket
: public ::SerializedPayloadPacket<::MultiplayerSettingsPacketInfo, ::MultiplayerSettingsPacketPayload> {
public:
    // MultiplayerSettingsPacket inner types define
    using PayloadType = ::MultiplayerSettingsPacketPayload;

    using PacketInfo = ::MultiplayerSettingsPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MultiplayerSettingsPacket() /*override*/;
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
