#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ServerSettingsResponsePacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct ServerSettingsResponsePacketInfo;
// clang-format on

class ServerSettingsResponsePacket
: public ::SerializedPayloadPacket<::ServerSettingsResponsePacketInfo, ::ServerSettingsResponsePacketPayload> {
public:
    ServerSettingsResponsePacket(uint formId, ::std::string const& formJSON) : mFormId(formId), mFormJSON(formJSON) {}
public:
    // ServerSettingsResponsePacket inner types define
    using PayloadType = ::ServerSettingsResponsePacketPayload;

    using PacketInfo = ::ServerSettingsResponsePacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerSettingsResponsePacket() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
