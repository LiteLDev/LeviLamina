#pragma once

#include "SubChunkPacket.h"
#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/dimension/Dimension.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class SubChunkRequestPacket : public ::Packet {

public:
    AutomaticID<Dimension, int>                    mDimensionType;      // this+0x30
    std::vector<SubChunkPos>                       mSubChunkPos;        // this+0x38
    std::vector<SubChunkPacket::SubChunkPosOffset> mSubChunkPosOffsets; // this+0x50
    unsigned int                                   mRequestCount;       // this+0x68
    SubChunkPos                                    mCenterPos;          // this+0x6C

    bool mArePositionsAbsolute; // this+0x78


    // prevent constructor by default
    SubChunkRequestPacket& operator=(SubChunkRequestPacket const&) = delete;
    SubChunkRequestPacket(SubChunkRequestPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@SubChunkRequestPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@SubChunkRequestPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@SubChunkRequestPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@SubChunkRequestPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
    /**
     * @symbol ??0SubChunkRequestPacket\@\@QEAA\@XZ
     */
    MCAPI SubChunkRequestPacket();
    // NOLINTEND
};
