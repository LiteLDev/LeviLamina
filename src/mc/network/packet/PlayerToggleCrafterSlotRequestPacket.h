#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PlayerToggleCrafterSlotRequestPacket : public ::Packet {
public:
    NetworkBlockPosition mPosition;
    int                  mSlot;
    bool                 mDisabled;

    // prevent constructor by default
    PlayerToggleCrafterSlotRequestPacket& operator=(PlayerToggleCrafterSlotRequestPacket const&);
    PlayerToggleCrafterSlotRequestPacket(PlayerToggleCrafterSlotRequestPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerToggleCrafterSlotRequestPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream&) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    MCAPI PlayerToggleCrafterSlotRequestPacket();

    // NOLINTEND
};
