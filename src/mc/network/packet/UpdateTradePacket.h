#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/containers/ContainerID.h"
#include "mc/world/containers/ContainerType.h"

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
};
