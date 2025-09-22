#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/CurrentStructureFeaturePacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct CurrentStructureFeaturePacketInfo;
// clang-format on

class CurrentStructureFeaturePacket
: public ::SerializedPayloadPacket<::CurrentStructureFeaturePacketInfo, ::CurrentStructureFeaturePacketPayload> {
public:
    // CurrentStructureFeaturePacket inner types define
    using PayloadType = ::CurrentStructureFeaturePacketPayload;

    using PacketInfo = ::CurrentStructureFeaturePacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CurrentStructureFeaturePacket() /*override*/;
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
