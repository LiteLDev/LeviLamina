#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/ContainerRegistryCleanupPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct ContainerRegistryCleanupPacketInfo;
// clang-format on

class ContainerRegistryCleanupPacket
: public ::SerializedPayloadPacket<::ContainerRegistryCleanupPacketInfo, ::ContainerRegistryCleanupPacketPayload> {
public:
    // ContainerRegistryCleanupPacket inner types define
    using PayloadType = ::ContainerRegistryCleanupPacketPayload;

    using PacketInfo = ::ContainerRegistryCleanupPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerRegistryCleanupPacket() /*override*/;
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
