#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/RemoveObjectivePacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct RemoveObjectivePacketInfo;
// clang-format on

class RemoveObjectivePacket
: public ::SerializedPayloadPacket<::RemoveObjectivePacketInfo, ::RemoveObjectivePacketPayload> {
public:
    // RemoveObjectivePacket inner types define
    using PayloadType = ::RemoveObjectivePacketPayload;

    using PacketInfo = ::RemoveObjectivePacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RemoveObjectivePacket() /*override*/;
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
