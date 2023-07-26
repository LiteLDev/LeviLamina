#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class SetLastHurtByPacket : public ::Packet {

public:
    // prevent constructor by default
    SetLastHurtByPacket& operator=(SetLastHurtByPacket const&) = delete;
    SetLastHurtByPacket(SetLastHurtByPacket const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@SetLastHurtByPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@SetLastHurtByPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@SetLastHurtByPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@SetLastHurtByPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SETLASTHURTBYPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SetLastHurtByPacket(); // NOLINT
#endif
    /**
     * @symbol ??0SetLastHurtByPacket\@\@QEAA\@W4ActorType\@\@\@Z
     */
    MCAPI SetLastHurtByPacket(enum class ActorType); // NOLINT
    /**
     * @symbol ??0SetLastHurtByPacket\@\@QEAA\@XZ
     */
    MCAPI SetLastHurtByPacket(); // NOLINT
};
