/**
 * @file  SetActorMotionPacket.hpp
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
 * @brief MC class SetActorMotionPacket.
 *
 */
class SetActorMotionPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETACTORMOTIONPACKET
public:
    class SetActorMotionPacket& operator=(class SetActorMotionPacket const &) = delete;
    SetActorMotionPacket(class SetActorMotionPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SetActorMotionPacket();
    /**
     * @hash   -1008487987
     * @vftbl  1
     * @symbol ?getId@SetActorMotionPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -2047188806
     * @vftbl  2
     * @symbol ?getName@SetActorMotionPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1884954669
     * @vftbl  3
     * @symbol ?write@SetActorMotionPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1890175187
     * @vftbl  6
     * @symbol ?_read@SetActorMotionPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   174463453
     * @symbol ??0SetActorMotionPacket@@QEAA@XZ
     */
    MCAPI SetActorMotionPacket();
    /**
     * @hash   1873338814
     * @symbol ??0SetActorMotionPacket@@QEAA@AEBVActor@@@Z
     */
    MCAPI SetActorMotionPacket(class Actor const &);

};