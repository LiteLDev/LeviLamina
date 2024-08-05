#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/packet/PlayerListEntry.h"
#include "mc/world/actor/player/PlayerListPacketType.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class PlayerListPacket : public ::Packet {
public:
    std::vector<PlayerListEntry> mEntries; // this+0x30
    PlayerListPacketType         mAction;  // this+0x48

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerListPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 5
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream& stream);

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI PlayerListPacket();

    MCAPI void emplace(class PlayerListEntry&& entry);

    // NOLINTEND
};
