#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class UpdateSubChunkBlocksPacket : public ::Packet {
public:
    // UpdateSubChunkBlocksPacket inner types declare
    // clang-format off
    struct BlocksChangedInfo;
    struct NetworkBlockInfo;
    // clang-format on

    // UpdateSubChunkBlocksPacket inner types define
    struct BlocksChangedInfo {

    public:
        // prevent constructor by default
        BlocksChangedInfo& operator=(BlocksChangedInfo const&) = delete;
        BlocksChangedInfo(BlocksChangedInfo const&)            = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0BlocksChangedInfo\@UpdateSubChunkBlocksPacket\@\@QEAA\@XZ
         */
        MCAPI BlocksChangedInfo();
        /**
         * @symbol
         * ?add\@BlocksChangedInfo\@UpdateSubChunkBlocksPacket\@\@QEAAXAEBVBlockPos\@\@IAEBVBlock\@\@HPEBUActorBlockSyncMessage\@\@\@Z
         */
        MCAPI void
        add(class BlockPos const&, unsigned int, class Block const&, int, struct ActorBlockSyncMessage const*);
        /**
         * @symbol ??1BlocksChangedInfo\@UpdateSubChunkBlocksPacket\@\@QEAA\@XZ
         */
        MCAPI ~BlocksChangedInfo();
        // NOLINTEND
    };

    struct NetworkBlockInfo {

    public:
        // prevent constructor by default
        NetworkBlockInfo& operator=(NetworkBlockInfo const&) = delete;
        NetworkBlockInfo(NetworkBlockInfo const&)            = delete;
        NetworkBlockInfo()                                   = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??1NetworkBlockInfo\@UpdateSubChunkBlocksPacket\@\@QEAA\@XZ
         */
        MCAPI ~NetworkBlockInfo();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    UpdateSubChunkBlocksPacket& operator=(UpdateSubChunkBlocksPacket const&) = delete;
    UpdateSubChunkBlocksPacket(UpdateSubChunkBlocksPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@UpdateSubChunkBlocksPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@UpdateSubChunkBlocksPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@UpdateSubChunkBlocksPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@UpdateSubChunkBlocksPacket\@\@MEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPDATESUBCHUNKBLOCKSPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~UpdateSubChunkBlocksPacket();
#endif
    /**
     * @symbol ??0UpdateSubChunkBlocksPacket\@\@QEAA\@XZ
     */
    MCAPI UpdateSubChunkBlocksPacket();
    /**
     * @symbol
     * ??0UpdateSubChunkBlocksPacket\@\@QEAA\@AEBV?$vector\@UNetworkBlockInfo\@UpdateSubChunkBlocksPacket\@\@V?$allocator\@UNetworkBlockInfo\@UpdateSubChunkBlocksPacket\@\@\@std\@\@\@std\@\@0\@Z
     */
    MCAPI
    UpdateSubChunkBlocksPacket(std::vector<struct UpdateSubChunkBlocksPacket::NetworkBlockInfo> const&, std::vector<struct UpdateSubChunkBlocksPacket::NetworkBlockInfo> const&);
    /**
     * @symbol ?setSubChunkPosition\@UpdateSubChunkBlocksPacket\@\@QEAAXAEBVSubChunkPos\@\@\@Z
     */
    MCAPI void setSubChunkPosition(class SubChunkPos const&);
    // NOLINTEND
};
