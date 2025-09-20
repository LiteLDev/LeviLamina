#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/CodeBuilderSourcePacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct CodeBuilderSourcePacketInfo;
// clang-format on

class CodeBuilderSourcePacket
: public ::SerializedPayloadPacket<::CodeBuilderSourcePacketInfo, ::CodeBuilderSourcePacketPayload> {
public:
    // CodeBuilderSourcePacket inner types define
    using PayloadType = ::CodeBuilderSourcePacketPayload;

    using PacketInfo = ::CodeBuilderSourcePacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CodeBuilderSourcePacket() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
