#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerType.h"

class UpdateTradePacket : public ::Packet {
public:
    // prevent constructor by default
    UpdateTradePacket& operator=(UpdateTradePacket const&);
    UpdateTradePacket(UpdateTradePacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdateTradePacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream& bitStream) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    MCAPI UpdateTradePacket();

    MCAPI UpdateTradePacket(
        ::ContainerID               containerID,
        ::ContainerType             type,
        int                         size,
        std::string const&          displayName,
        class CompoundTag&&         tag,
        struct ActorUniqueID const& entityID,
        struct ActorUniqueID const& playerID,
        int                         traderTier,
        bool                        useNewTradeScreen,
        bool                        usingEconomyTrade
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void* ctor$(
        ::ContainerID               containerID,
        ::ContainerType             type,
        int                         size,
        std::string const&          displayName,
        class CompoundTag&&         tag,
        struct ActorUniqueID const& entityID,
        struct ActorUniqueID const& playerID,
        int                         traderTier,
        bool                        useNewTradeScreen,
        bool                        usingEconomyTrade
    );

    MCAPI void dtor$();

    MCAPI class Bedrock::Result<void> _read$(class ReadOnlyBinaryStream& stream);

    MCAPI ::MinecraftPacketIds getId$() const;

    MCAPI std::string getName$() const;

    MCAPI void write$(class BinaryStream& bitStream) const;

    // NOLINTEND
};
