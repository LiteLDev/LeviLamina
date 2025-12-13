#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/GameTestResultsPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct GameTestResultsPacketInfo;
// clang-format on

class GameTestResultsPacket
: public ::SerializedPayloadPacket<::GameTestResultsPacketInfo, ::GameTestResultsPacketPayload> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameTestResultsPacket() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
