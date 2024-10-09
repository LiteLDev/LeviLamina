#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/ContainerID.h"

class PlayerHotbarPacket : public ::Packet {
public:
    uint        mSelectedSlot;     // this+0x30
    bool        mShouldSelectSlot; // this+0x34
    ContainerID mContainerId;      // this+0x35

    // prevent constructor by default
    PlayerHotbarPacket& operator=(PlayerHotbarPacket const&);
    PlayerHotbarPacket(PlayerHotbarPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerHotbarPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI PlayerHotbarPacket();

    MCAPI PlayerHotbarPacket(uint selectedSlot, ::ContainerID containerID, bool shouldSelectSlot);

    // NOLINTEND
};
