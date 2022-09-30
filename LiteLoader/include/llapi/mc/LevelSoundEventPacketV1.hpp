/**
 * @file  LevelSoundEventPacketV1.hpp
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
 * @brief MC class LevelSoundEventPacketV1.
 *
 */
class LevelSoundEventPacketV1 : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSOUNDEVENTPACKETV1
public:
    class LevelSoundEventPacketV1& operator=(class LevelSoundEventPacketV1 const &) = delete;
    LevelSoundEventPacketV1(class LevelSoundEventPacketV1 const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LevelSoundEventPacketV1();
    /**
     * @hash   -142918740
     * @vftbl  1
     * @symbol ?getId@LevelSoundEventPacketV1@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1379294551
     * @vftbl  2
     * @symbol ?getName@LevelSoundEventPacketV1@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -299965538
     * @vftbl  3
     * @symbol ?write@LevelSoundEventPacketV1@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1010010706
     * @vftbl  6
     * @symbol ?_read@LevelSoundEventPacketV1@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1101689538
     * @symbol ??0LevelSoundEventPacketV1@@QEAA@XZ
     */
    MCAPI LevelSoundEventPacketV1();

};