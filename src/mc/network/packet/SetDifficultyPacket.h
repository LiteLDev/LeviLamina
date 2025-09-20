#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SetDifficultyPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct SetDifficultyPacketInfo;
// clang-format on

class SetDifficultyPacket : public ::SerializedPayloadPacket<::SetDifficultyPacketInfo, ::SetDifficultyPacketPayload> {
public:
    // SetDifficultyPacket inner types define
    using PayloadType = ::SetDifficultyPacketPayload;

    using PacketInfo = ::SetDifficultyPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetDifficultyPacket() /*override*/;
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
