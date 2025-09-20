#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SpawnExperienceOrbPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct SpawnExperienceOrbPacketInfo;
// clang-format on

class SpawnExperienceOrbPacket
: public ::SerializedPayloadPacket<::SpawnExperienceOrbPacketInfo, ::SpawnExperienceOrbPacketPayload> {
public:
    // SpawnExperienceOrbPacket inner types define
    using PayloadType = ::SpawnExperienceOrbPacketPayload;

    using PacketInfo = ::SpawnExperienceOrbPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SpawnExperienceOrbPacket() /*override*/;
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
