#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class AddActorBasePacket : public ::Packet {
public:
    // prevent constructor by default
    AddActorBasePacket& operator=(AddActorBasePacket const&);
    AddActorBasePacket(AddActorBasePacket const&);
    AddActorBasePacket();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AddActorBasePacket@@UEAA@XZ
    virtual ~AddActorBasePacket();

    // NOLINTEND
};
