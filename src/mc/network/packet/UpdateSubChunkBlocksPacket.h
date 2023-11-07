#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/world/level/ActorBlockSyncMessage.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class UpdateSubChunkBlocksPacket : public ::Packet {
public:
    // UpdateSubChunkBlocksPacket inner types declare
    // clang-format off
    struct BlocksChangedInfo;
    struct NetworkBlockInfo;
    // clang-format on

    // UpdateSubChunkBlocksPacket inner types define
    struct NetworkBlockInfo {

    public:
        NetworkBlockPosition  mPos;         // this+0x0
        uint                  mRuntimeId;   // this+0xC
        uchar                 mUpdateFlags; // this+0x10
        ActorBlockSyncMessage mSyncMessage; // this+0x18

        // prevent constructor by default
        NetworkBlockInfo& operator=(NetworkBlockInfo const&) = delete;
        NetworkBlockInfo(NetworkBlockInfo const&)            = delete;
        NetworkBlockInfo()                                   = delete;

    public:
        // NOLINTBEGIN
        // symbol: ??1NetworkBlockInfo@UpdateSubChunkBlocksPacket@@QEAA@XZ
        MCAPI ~NetworkBlockInfo();
        // NOLINTEND
    };

    struct BlocksChangedInfo {
    public:
        std::vector<NetworkBlockInfo> mStandards; // this+0x0
        std::vector<NetworkBlockInfo> mExtras;    // this+0x18

        // prevent constructor by default
        BlocksChangedInfo& operator=(BlocksChangedInfo const&);
        BlocksChangedInfo(BlocksChangedInfo const&);

    public:
        // NOLINTBEGIN
        // symbol: ??0BlocksChangedInfo@UpdateSubChunkBlocksPacket@@QEAA@XZ
        MCAPI BlocksChangedInfo();

        // symbol:
        // ?add@BlocksChangedInfo@UpdateSubChunkBlocksPacket@@QEAAXAEBVBlockPos@@IAEBVBlock@@HPEBUActorBlockSyncMessage@@@Z
        MCAPI void add(class BlockPos const&, uint, class Block const&, int, struct ActorBlockSyncMessage const*);

        // symbol: ??1BlocksChangedInfo@UpdateSubChunkBlocksPacket@@QEAA@XZ
        MCAPI ~BlocksChangedInfo();

        // NOLINTEND
    };

public:
    BlocksChangedInfo    mBlocksChanged;         // this+0x30
    NetworkBlockPosition mSubChunkBlockPosition; // this+0x60

    // prevent constructor by default
    UpdateSubChunkBlocksPacket& operator=(UpdateSubChunkBlocksPacket const&);
    UpdateSubChunkBlocksPacket(UpdateSubChunkBlocksPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1UpdateSubChunkBlocksPacket@@UEAA@XZ
    virtual ~UpdateSubChunkBlocksPacket();

    // vIndex: 1, symbol: ?getId@UpdateSubChunkBlocksPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2, symbol:
    // ?getName@UpdateSubChunkBlocksPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const;

    // vIndex: 3, symbol: ?write@UpdateSubChunkBlocksPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const;

    // vIndex: 7, symbol:
    // ?_read@UpdateSubChunkBlocksPacket@@MEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    // symbol: ??0UpdateSubChunkBlocksPacket@@QEAA@XZ
    MCAPI UpdateSubChunkBlocksPacket();

    // symbol:
    // ??0UpdateSubChunkBlocksPacket@@QEAA@AEBV?$vector@UNetworkBlockInfo@UpdateSubChunkBlocksPacket@@V?$allocator@UNetworkBlockInfo@UpdateSubChunkBlocksPacket@@@std@@@std@@0@Z
    MCAPI
    UpdateSubChunkBlocksPacket(std::vector<struct UpdateSubChunkBlocksPacket::NetworkBlockInfo> const&, std::vector<struct UpdateSubChunkBlocksPacket::NetworkBlockInfo> const&);

    // symbol: ?setSubChunkPosition@UpdateSubChunkBlocksPacket@@QEAAXAEBVSubChunkPos@@@Z
    MCAPI void setSubChunkPosition(class SubChunkPos const&);

    // NOLINTEND
};
