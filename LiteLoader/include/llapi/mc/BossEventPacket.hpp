/**
 * @file  BossEventPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BossEventPacket();
    /**
     * @hash   -1421822007
     * @vftbl  1
     * @symbol ?getId@BossEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   603460214
     * @vftbl  2
     * @symbol ?getName@BossEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1769896399
     * @vftbl  3
     * @symbol ?write@BossEventPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -863586719
     * @vftbl  6
     * @symbol ?_read@BossEventPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   855963185
     * @symbol ??0BossEventPacket@@QEAA@XZ
     */
    MCAPI BossEventPacket();
    /**
     * @hash   585915502
     * @symbol ??0BossEventPacket@@QEAA@W4BossEventUpdateType@@UActorUniqueID@@AEAVBossComponent@@@Z
     */
    MCAPI BossEventPacket(enum BossEventUpdateType, struct ActorUniqueID, class BossComponent &);
    /**
     * @hash   388598923
     * @symbol ??0BossEventPacket@@QEAA@W4BossEventUpdateType@@AEAVRaidBossComponent@@@Z
     */
    MCAPI BossEventPacket(enum BossEventUpdateType, class RaidBossComponent &);

};