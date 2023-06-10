/**
 * @file  BossEventPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BossEventPacket.
 *
 */
class BossEventPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOSSEVENTPACKET
public:
    class BossEventPacket& operator=(class BossEventPacket const &) = delete;
    BossEventPacket(class BossEventPacket const &) = delete;
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
     * @symbol ?getName\@BossEventPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@BossEventPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@BossEventPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BOSSEVENTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BossEventPacket();
#endif
    /**
     * @symbol ??0BossEventPacket\@\@QEAA\@W4BossEventUpdateType\@\@AEAVRaidBossComponent\@\@\@Z
     */
    MCAPI BossEventPacket(enum class BossEventUpdateType, class RaidBossComponent &);
    /**
     * @symbol ??0BossEventPacket\@\@QEAA\@W4BossEventUpdateType\@\@UActorUniqueID\@\@AEAVBossComponent\@\@\@Z
     */
    MCAPI BossEventPacket(enum class BossEventUpdateType, struct ActorUniqueID, class BossComponent &);
    /**
     * @symbol ??0BossEventPacket\@\@QEAA\@XZ
     */
    MCAPI BossEventPacket();

};
