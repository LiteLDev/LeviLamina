#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PlayerStartItemCooldownPacket : public ::Packet {
public:
    std::string mItemCategory;  // this+0x30
    int         mDurationTicks; // this+0x50

    // prevent constructor by default
    PlayerStartItemCooldownPacket& operator=(PlayerStartItemCooldownPacket const&);
    PlayerStartItemCooldownPacket(PlayerStartItemCooldownPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerStartItemCooldownPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI PlayerStartItemCooldownPacket();

    MCAPI PlayerStartItemCooldownPacket(std::string const&, int durationTicks);

    // NOLINTEND
};
