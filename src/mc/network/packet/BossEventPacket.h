#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/network/packet/Packet.h"

class BossEventPacket : public ::Packet {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOSSEVENTPACKET
public:
    BossEventPacket& operator=(BossEventPacket const&) = delete;
    BossEventPacket(BossEventPacket const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@BossEventPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@BossEventPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@BossEventPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const;
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@BossEventPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BOSSEVENTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BossEventPacket();
#endif
    /**
     * @symbol ??0BossEventPacket\@\@QEAA\@W4BossEventUpdateType\@\@UActorUniqueID\@\@AEAVBossComponent\@\@\@Z
     */
    MCAPI BossEventPacket(enum class BossEventUpdateType, struct ActorUniqueID, class BossComponent&);
    /**
     * @symbol ??0BossEventPacket\@\@QEAA\@W4BossEventUpdateType\@\@AEAVRaidBossComponent\@\@\@Z
     */
    MCAPI BossEventPacket(enum class BossEventUpdateType, class RaidBossComponent&);
    /**
     * @symbol ??0BossEventPacket\@\@QEAA\@XZ
     */
    MCAPI BossEventPacket();
};
