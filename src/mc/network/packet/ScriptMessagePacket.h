#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ScriptMessagePacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct ScriptMessagePacketInfo;
// clang-format on

class ScriptMessagePacket : public ::SerializedPayloadPacket<::ScriptMessagePacketInfo, ::ScriptMessagePacketPayload> {
public:
    // ScriptMessagePacket inner types define
    using PayloadType = ::ScriptMessagePacketPayload;

    using PacketInfo = ::ScriptMessagePacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptMessagePacket() /*override*/;
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
