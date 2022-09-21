/**
 * @file  MC/LevelSoundEventPacket.hpp
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
 * @brief MC class LevelSoundEventPacket.
 *
 */
class LevelSoundEventPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSOUNDEVENTPACKET
public:
    class LevelSoundEventPacket& operator=(class LevelSoundEventPacket const &) = delete;
    LevelSoundEventPacket(class LevelSoundEventPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LevelSoundEventPacket();
    /**
     * @hash   -936584137
     * @vftbl  1
     * @symbol ?getId@LevelSoundEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   2000088836
     * @vftbl  2
     * @symbol ?getName@LevelSoundEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -843650685
     * @vftbl  3
     * @symbol ?write@LevelSoundEventPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   2141928643
     * @vftbl  6
     * @symbol ?_read@LevelSoundEventPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1791150659
     * @symbol ??0LevelSoundEventPacket@@QEAA@XZ
     */
    MCAPI LevelSoundEventPacket();
    /**
     * @hash   814571107
     * @symbol ??0LevelSoundEventPacket@@QEAA@W4LevelSoundEvent@@AEBVVec3@@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N3@Z
     */
    MCAPI LevelSoundEventPacket(enum LevelSoundEvent, class Vec3 const &, int, std::string const &, bool, bool);

};