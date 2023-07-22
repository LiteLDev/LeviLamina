/**
 * @file  LevelSoundEventPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~LevelSoundEventPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@LevelSoundEventPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@LevelSoundEventPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@LevelSoundEventPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@LevelSoundEventPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0LevelSoundEventPacket\@\@QEAA\@XZ
     */
    MCAPI LevelSoundEventPacket();
    /**
     * @symbol  ??0LevelSoundEventPacket\@\@QEAA\@W4LevelSoundEvent\@\@AEBVVec3\@\@HAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N3\@Z
     */
    MCAPI LevelSoundEventPacket(enum class LevelSoundEvent, class Vec3 const &, int, std::string const &, bool, bool);

};