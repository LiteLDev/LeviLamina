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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BossEventPacket();
    /**
     * @hash   1946372265
     * @vftbl  1
     * @symbol  ?getId\@BossEventPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -323312810
     * @vftbl  2
     * @symbol  ?getName\@BossEventPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1598297873
     * @vftbl  3
     * @symbol  ?write\@BossEventPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1790359743
     * @vftbl  6
     * @symbol  ?_read\@BossEventPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -70809839
     * @symbol  ??0BossEventPacket\@\@QEAA\@XZ
     */
    MCAPI BossEventPacket();
    /**
     * @hash   -340857522
     * @symbol  ??0BossEventPacket\@\@QEAA\@W4BossEventUpdateType\@\@UActorUniqueID\@\@AEAVBossComponent\@\@\@Z
     */
    MCAPI BossEventPacket(enum class BossEventUpdateType, struct ActorUniqueID, class BossComponent &);
    /**
     * @hash   -538174101
     * @symbol  ??0BossEventPacket\@\@QEAA\@W4BossEventUpdateType\@\@AEAVRaidBossComponent\@\@\@Z
     */
    MCAPI BossEventPacket(enum class BossEventUpdateType, class RaidBossComponent &);

};