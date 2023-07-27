#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/BossBarColor.h"
#include "mc/enums/BossBarOverlay.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/ActorUniqueID.h"
#include "mc/world/events/BossEventUpdateType.h"

class BossEventPacket : public ::Packet {

public:
    int                            FLAG_DARKEN;     // this+0x30
    int                            FLAG_FOG;        // this+0x34
    struct ActorUniqueID           mBossID;         // this+0x38
    struct ActorUniqueID           mPlayerID;       // this+0x40
    enum class BossEventUpdateType mEventType;      // this+0x48
    std::string                    mName;           // this+0x50
    float                          mHealthPercent;  // this+0x70
    enum class BossBarColor        mColor;          // this+0x74
    enum class BossBarOverlay      mOverlay;        // this+0x78
    unsigned char                  mDarkenScreen;   // this+0x7C
    unsigned char                  mCreateWorldFog; // this+0x7D

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getId\@BossEventPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?getName\@BossEventPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?write\@BossEventPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?_read\@BossEventPacket\@\@EEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BOSSEVENTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BossEventPacket(); // NOLINT
#endif
    /**
     * @symbol ??0BossEventPacket\@\@QEAA\@W4BossEventUpdateType\@\@UActorUniqueID\@\@AEAVBossComponent\@\@\@Z
     */
    MCAPI BossEventPacket(enum class BossEventUpdateType, struct ActorUniqueID, class BossComponent&); // NOLINT
    /**
     * @symbol ??0BossEventPacket\@\@QEAA\@W4BossEventUpdateType\@\@AEAVRaidBossComponent\@\@\@Z
     */
    MCAPI BossEventPacket(enum class BossEventUpdateType, class RaidBossComponent&); // NOLINT
    /**
     * @symbol ??0BossEventPacket\@\@QEAA\@XZ
     */
    MCAPI BossEventPacket(); // NOLINT
};
