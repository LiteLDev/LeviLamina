/**
 * @file  MotionPredictionHintsPacket.hpp
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
 * @brief MC class MotionPredictionHintsPacket.
 *
 */
class MotionPredictionHintsPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOTIONPREDICTIONHINTSPACKET
public:
    class MotionPredictionHintsPacket& operator=(class MotionPredictionHintsPacket const &) = delete;
    MotionPredictionHintsPacket(class MotionPredictionHintsPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MotionPredictionHintsPacket();
    /**
     * @hash   1649595199
     * @vftbl  1
     * @symbol ?getId@MotionPredictionHintsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   1038151148
     * @vftbl  2
     * @symbol ?getName@MotionPredictionHintsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1958696923
     * @vftbl  3
     * @symbol ?write@MotionPredictionHintsPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   88683451
     * @vftbl  6
     * @symbol ?_read@MotionPredictionHintsPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   179605323
     * @symbol ??0MotionPredictionHintsPacket@@QEAA@XZ
     */
    MCAPI MotionPredictionHintsPacket();
    /**
     * @hash   1624482160
     * @symbol ??0MotionPredictionHintsPacket@@QEAA@AEBVActor@@@Z
     */
    MCAPI MotionPredictionHintsPacket(class Actor const &);

};