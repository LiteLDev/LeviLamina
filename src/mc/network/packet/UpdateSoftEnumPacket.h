#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/UpdateSoftEnumPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct UpdateSoftEnumPacketInfo;
// clang-format on

class UpdateSoftEnumPacket
: public ::SerializedPayloadPacket<::UpdateSoftEnumPacketInfo, ::UpdateSoftEnumPacketPayload> {
public:
    // UpdateSoftEnumPacket inner types define
    using PayloadType = ::UpdateSoftEnumPacketPayload;

    using PacketInfo = ::UpdateSoftEnumPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdateSoftEnumPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UpdateSoftEnumPacket();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
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
