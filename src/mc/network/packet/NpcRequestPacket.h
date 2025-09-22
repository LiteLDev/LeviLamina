#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/NpcRequestPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct NpcRequestPacketInfo;
// clang-format on

class NpcRequestPacket : public ::SerializedPayloadPacket<::NpcRequestPacketInfo, ::NpcRequestPacketPayload> {
public:
    // NpcRequestPacket inner types define
    using PayloadType = ::NpcRequestPacketPayload;

    using PacketInfo = ::NpcRequestPacketInfo;

public:
    // prevent constructor by default
    NpcRequestPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NpcRequestPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit NpcRequestPacket(::NpcRequestPacketPayload payload);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::NpcRequestPacketPayload payload);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
