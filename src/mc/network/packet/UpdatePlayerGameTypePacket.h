#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/level/GameType.h"

class UpdatePlayerGameTypePacket : public ::Packet {
public:
    // prevent constructor by default
    UpdatePlayerGameTypePacket& operator=(UpdatePlayerGameTypePacket const&);
    UpdatePlayerGameTypePacket(UpdatePlayerGameTypePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdatePlayerGameTypePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& stream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI UpdatePlayerGameTypePacket();

    MCAPI UpdatePlayerGameTypePacket(::GameType playerGameType, struct ActorUniqueID const& targetPlayer, uint64 tick);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(::GameType playerGameType, struct ActorUniqueID const& targetPlayer, uint64 tick);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& stream) const;

    // NOLINTEND
};
