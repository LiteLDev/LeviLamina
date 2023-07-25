#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class UpdateBlockPacket : public ::Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEBLOCKPACKET
public:
    UpdateBlockPacket& operator=(UpdateBlockPacket const&) = delete;
    UpdateBlockPacket(UpdateBlockPacket const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@UpdateBlockPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@UpdateBlockPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@UpdateBlockPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@UpdateBlockPacket\@\@MEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPDATEBLOCKPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~UpdateBlockPacket();
#endif
    /**
     * @symbol ??0UpdateBlockPacket\@\@QEAA\@AEBVBlockPos\@\@IIE\@Z
     */
    MCAPI UpdateBlockPacket(class BlockPos const&, unsigned int, unsigned int, unsigned char);
    /**
     * @symbol ??0UpdateBlockPacket\@\@QEAA\@XZ
     */
    MCAPI UpdateBlockPacket();
};
