#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/MapCreateLockedCopyPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct MapCreateLockedCopyPacketInfo;
// clang-format on

class MapCreateLockedCopyPacket
: public ::SerializedPayloadPacket<::MapCreateLockedCopyPacketInfo, ::MapCreateLockedCopyPacketPayload> {
public:
    // MapCreateLockedCopyPacket inner types define
    using PayloadType = ::MapCreateLockedCopyPacketPayload;

    using PacketInfo = ::MapCreateLockedCopyPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MapCreateLockedCopyPacket() /*override*/;
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
