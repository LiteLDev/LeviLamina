#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class AddActorBasePacket : public ::Packet {
public:
    // prevent constructor by default
    AddActorBasePacket& operator=(AddActorBasePacket const&);
    AddActorBasePacket(AddActorBasePacket const&);
    AddActorBasePacket();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AddActorBasePacket();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
