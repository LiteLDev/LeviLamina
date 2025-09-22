#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SettingsCommandPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct SettingsCommandPacketInfo;
// clang-format on

class SettingsCommandPacket
: public ::SerializedPayloadPacket<::SettingsCommandPacketInfo, ::SettingsCommandPacketPayload> {
public:
    // SettingsCommandPacket inner types define
    using PayloadType = ::SettingsCommandPacketPayload;

    using PacketInfo = ::SettingsCommandPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SettingsCommandPacket() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
