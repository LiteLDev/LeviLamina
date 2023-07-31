#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class SetActorMotionPacket : public ::Packet {

public:
    // prevent constructor by default
    SetActorMotionPacket& operator=(SetActorMotionPacket const&) = delete;
    SetActorMotionPacket(SetActorMotionPacket const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@SetActorMotionPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@SetActorMotionPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@SetActorMotionPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@SetActorMotionPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETACTORMOTIONPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SetActorMotionPacket();
#endif
    /**
     * @symbol ??0SetActorMotionPacket\@\@QEAA\@AEBVActor\@\@\@Z
     */
    MCAPI SetActorMotionPacket(class Actor const&);
    /**
     * @symbol ??0SetActorMotionPacket\@\@QEAA\@XZ
     */
    MCAPI SetActorMotionPacket();
    // NOLINTEND
};
