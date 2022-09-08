/**
 * @file  LevelSoundEventPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
     * @hash   1532596773
     */
    virtual ~LevelSoundEventPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@LevelSoundEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -936584137
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@LevelSoundEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   2000088836
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@LevelSoundEventPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -843650685
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@LevelSoundEventPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   2141928643
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0LevelSoundEventPacket@@QEAA@XZ
     * @hash   1791150659
     */
    MCAPI LevelSoundEventPacket();
    /**
     * @symbol ??0LevelSoundEventPacket@@QEAA@W4LevelSoundEvent@@AEBVVec3@@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N3@Z
     * @hash   814571107
     */
    MCAPI LevelSoundEventPacket(enum LevelSoundEvent, class Vec3 const &, int, std::string const &, bool, bool);

};