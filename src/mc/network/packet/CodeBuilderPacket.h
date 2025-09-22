#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/CodeBuilderPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct CodeBuilderPacketInfo;
// clang-format on

class CodeBuilderPacket : public ::SerializedPayloadPacket<::CodeBuilderPacketInfo, ::CodeBuilderPacketPayload> {
public:
    // CodeBuilderPacket inner types define
    using PayloadType = ::CodeBuilderPacketPayload;

    using PacketInfo = ::CodeBuilderPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CodeBuilderPacket() /*override*/;
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
