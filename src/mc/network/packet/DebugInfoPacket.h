#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class DebugInfoPacket : public ::Packet {
public:
    std::string   mData;    // this+0x30
    ActorUniqueID mActorId; // this+0x50

    // prevent constructor by default
    DebugInfoPacket& operator=(DebugInfoPacket const&);
    DebugInfoPacket(DebugInfoPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DebugInfoPacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI DebugInfoPacket();

    // NOLINTEND
};
