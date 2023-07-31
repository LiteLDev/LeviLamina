#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class ChunkRadiusUpdatedPacket : public ::Packet {

public:
    // prevent constructor by default
    ChunkRadiusUpdatedPacket& operator=(ChunkRadiusUpdatedPacket const&) = delete;
    ChunkRadiusUpdatedPacket(ChunkRadiusUpdatedPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ChunkRadiusUpdatedPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@ChunkRadiusUpdatedPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ChunkRadiusUpdatedPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@ChunkRadiusUpdatedPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHUNKRADIUSUPDATEDPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ChunkRadiusUpdatedPacket();
#endif
    /**
     * @symbol ??0ChunkRadiusUpdatedPacket\@\@QEAA\@H\@Z
     */
    MCAPI ChunkRadiusUpdatedPacket(int);
    /**
     * @symbol ??0ChunkRadiusUpdatedPacket\@\@QEAA\@XZ
     */
    MCAPI ChunkRadiusUpdatedPacket();
    // NOLINTEND
};
