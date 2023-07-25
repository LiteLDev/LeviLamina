#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class BlockActorDataPacket : public ::Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKACTORDATAPACKET
public:
    BlockActorDataPacket& operator=(BlockActorDataPacket const&) = delete;
    BlockActorDataPacket(BlockActorDataPacket const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@BlockActorDataPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@BlockActorDataPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@BlockActorDataPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@BlockActorDataPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
    /**
     * @symbol ??0BlockActorDataPacket\@\@QEAA\@XZ
     */
    MCAPI BlockActorDataPacket();
    /**
     * @symbol ??0BlockActorDataPacket\@\@QEAA\@AEBVBlockPos\@\@VCompoundTag\@\@\@Z
     */
    MCAPI BlockActorDataPacket(class BlockPos const&, class CompoundTag);
};
