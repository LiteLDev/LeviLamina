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
    // vIndex: 0, symbol: ??1UpdateTradePacket@@UEAA@XZ
    virtual ~UpdateTradePacket();

    // vIndex: 1, symbol: ?getId@UpdateTradePacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@UpdateTradePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 4, symbol: ?write@UpdateTradePacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream& bitStream) const;

    // vIndex: 8, symbol:
    // ?_read@UpdateTradePacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream& stream);

    // symbol: ??0UpdateTradePacket@@QEAA@XZ
    MCAPI UpdateTradePacket();

    // symbol:
    // ??0UpdateTradePacket@@QEAA@W4ContainerID@@W4ContainerType@@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAVCompoundTag@@AEBUActorUniqueID@@4H_N5@Z
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
