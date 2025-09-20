#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/UnlockedRecipesPacketPayload.h"
#include "mc/network/packet/serialize/SerializedPayloadPacket.h"

// auto generated forward declare list
// clang-format off
struct UnlockedRecipesPacketInfo;
// clang-format on

class UnlockedRecipesPacket
: public ::SerializedPayloadPacket<::UnlockedRecipesPacketInfo, ::UnlockedRecipesPacketPayload> {
public:
    // UnlockedRecipesPacket inner types define
    using PayloadType = ::UnlockedRecipesPacketPayload;

    using PacketInfo = ::UnlockedRecipesPacketInfo;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UnlockedRecipesPacket() /*override*/;
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
