#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorUniqueID.h"
#include "mc/nbt/CompoundTag.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerType.h"

class UpdateTradePacket : public ::Packet {
public:
    ContainerID   mContainerId;       // this+0x30
    ContainerType mType;              // this+0x31
    std::string   mDisplayName;       // this+0x38
    int           mSize;              // this+0x58
    int           mTraderTier;        // this+0x5C
    ActorUniqueID mEntityUniqueID;    // this+0x60
    ActorUniqueID mLastTradingPlayer; // this+0x68
    CompoundTag   mData;              // this+0x70
    bool          mUseNewTradeScreen; // this+0x88
    bool          mUsingEconomyTrade; // this+0x89

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
