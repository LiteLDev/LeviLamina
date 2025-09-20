#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/AddBehaviorTreePacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct AddBehaviorTreePacketInfo;
// clang-format on

class AddBehaviorTreePacket
: public ::SerializedPayloadPacket<::AddBehaviorTreePacketInfo, ::AddBehaviorTreePacketPayload> {
public:
    // AddBehaviorTreePacket inner types define
    using PayloadType = ::AddBehaviorTreePacketPayload;

    using PacketInfo = ::AddBehaviorTreePacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AddBehaviorTreePacket() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
