#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class UpdateBlockSyncedPacket : public ::Packet {

public:
    // prevent constructor by default
    UpdateBlockSyncedPacket& operator=(UpdateBlockSyncedPacket const&) = delete;
    UpdateBlockSyncedPacket(UpdateBlockSyncedPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@UpdateBlockSyncedPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@UpdateBlockSyncedPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@UpdateBlockSyncedPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@UpdateBlockSyncedPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPDATEBLOCKSYNCEDPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~UpdateBlockSyncedPacket(); // NOLINT
#endif
    /**
     * @symbol ??0UpdateBlockSyncedPacket\@\@QEAA\@XZ
     */
    MCAPI UpdateBlockSyncedPacket(); // NOLINT
    /**
     * @symbol ??0UpdateBlockSyncedPacket\@\@QEAA\@AEBVBlockPos\@\@IIEAEBUActorBlockSyncMessage\@\@\@Z
     */
    MCAPI
    UpdateBlockSyncedPacket(class BlockPos const&, unsigned int, unsigned int, unsigned char, struct ActorBlockSyncMessage const&); // NOLINT
};
