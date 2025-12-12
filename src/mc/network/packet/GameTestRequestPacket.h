#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/GameTestRequestPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct GameTestRequestPacketInfo;
// clang-format on

class GameTestRequestPacket
: public ::SerializedPayloadPacket<::GameTestRequestPacketInfo, ::GameTestRequestPacketPayload> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameTestRequestPacket() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameTestRequestPacket();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
