#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SimulationTypePacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct SimulationTypePacketInfo;
// clang-format on

class SimulationTypePacket
: public ::SerializedPayloadPacket<::SimulationTypePacketInfo, ::SimulationTypePacketPayload> {
public:
    // SimulationTypePacket inner types define
    using PayloadType = ::SimulationTypePacketPayload;

    using PacketInfo = ::SimulationTypePacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SimulationTypePacket() /*override*/;
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
