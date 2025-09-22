#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ContainerClosePacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct ContainerClosePacketInfo;
// clang-format on

class ContainerClosePacket
: public ::SerializedPayloadPacket<::ContainerClosePacketInfo, ::ContainerClosePacketPayload> {
public:
    // ContainerClosePacket inner types define
    using PayloadType = ::ContainerClosePacketPayload;

    using PacketInfo = ::ContainerClosePacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerClosePacket() /*override*/;
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
