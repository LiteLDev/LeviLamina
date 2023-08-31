#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"

class UpdateClientInputLocksPacket : public ::Packet {

public:
    int32_t  mInputLockComponentData; // this+0x30
    Vec3 mServerPos;              // this+0x34

    // prevent constructor by default
    UpdateClientInputLocksPacket& operator=(UpdateClientInputLocksPacket const&) = delete;
    UpdateClientInputLocksPacket(UpdateClientInputLocksPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@UpdateClientInputLocksPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@UpdateClientInputLocksPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@UpdateClientInputLocksPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@UpdateClientInputLocksPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UPDATECLIENTINPUTLOCKSPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~UpdateClientInputLocksPacket();
#endif
    /**
     * @symbol ??0UpdateClientInputLocksPacket\@\@QEAA\@AEBUClientInputLockComponent\@\@AEBVVec3\@\@\@Z
     */
    MCAPI UpdateClientInputLocksPacket(struct ClientInputLockComponent const&, class Vec3 const&);
    /**
     * @symbol ??0UpdateClientInputLocksPacket\@\@QEAA\@XZ
     */
    MCAPI UpdateClientInputLocksPacket();
    // NOLINTEND
};
