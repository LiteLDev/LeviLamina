/**
 * @file  LevelSoundEventPacketV2.hpp
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
 * @brief MC class LevelSoundEventPacketV2.
 *
 */
class LevelSoundEventPacketV2 : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELSOUNDEVENTPACKETV2
public:
    class LevelSoundEventPacketV2& operator=(class LevelSoundEventPacketV2 const &) = delete;
    LevelSoundEventPacketV2(class LevelSoundEventPacketV2 const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LevelSoundEventPacketV2();
    /**
     * @hash   -1272459141
     * @vftbl  1
     * @symbol ?getId@LevelSoundEventPacketV2@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1862513752
     * @vftbl  2
     * @symbol ?getName@LevelSoundEventPacketV2@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   1026026303
     * @vftbl  3
     * @symbol ?write@LevelSoundEventPacketV2@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1422513745
     * @vftbl  6
     * @symbol ?_read@LevelSoundEventPacketV2@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   1425955951
     * @symbol ??0LevelSoundEventPacketV2@@QEAA@XZ
     */
    MCAPI LevelSoundEventPacketV2();

};