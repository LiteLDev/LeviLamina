#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SetTitlePacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct SetTitlePacketInfo;
// clang-format on

class SetTitlePacket : public ::SerializedPayloadPacket<::SetTitlePacketInfo, ::SetTitlePacketPayload> {
public:
    // SetTitlePacket inner types define
    using PayloadType = ::SetTitlePacketPayload;

    using PacketInfo = ::SetTitlePacketInfo;

public:
    template <typename... Args>
    SetTitlePacket(Args&&... args) : SerializedPayloadPacket(std::forward<Args>(args)...) {}

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetTitlePacket() /*override*/;
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
