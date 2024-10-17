#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/GameType.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

class SetPlayerGameTypePacket : public ::Packet {
public:
    GameType mPlayerGameType; // this+0x30

    // prevent constructor by default
    SetPlayerGameTypePacket& operator=(SetPlayerGameTypePacket const&);
    SetPlayerGameTypePacket(SetPlayerGameTypePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SetPlayerGameTypePacket() = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI SetPlayerGameTypePacket();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
