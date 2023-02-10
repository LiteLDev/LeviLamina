/**
 * @file  LevelEventPacket.hpp
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
 * @brief MC class LevelEventPacket.
 *
 */
class LevelEventPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELEVENTPACKET
public:
    class LevelEventPacket& operator=(class LevelEventPacket const &) = delete;
    LevelEventPacket(class LevelEventPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~LevelEventPacket();
    /**
     * @hash   2070709296
     * @vftbl  1
     * @symbol  ?getId\@LevelEventPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   1631421213
     * @vftbl  2
     * @symbol  ?getName\@LevelEventPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -1259273030
     * @vftbl  3
     * @symbol  ?write\@LevelEventPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   12874266
     * @vftbl  6
     * @symbol  ?_read\@LevelEventPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -658041558
     * @symbol  ??0LevelEventPacket\@\@QEAA\@XZ
     */
    MCAPI LevelEventPacket();
    /**
     * @hash   -732626701
     * @symbol  ??0LevelEventPacket\@\@QEAA\@W4LevelEvent\@\@MMMH\@Z
     */
    MCAPI LevelEventPacket(enum class LevelEvent, float, float, float, int);
    /**
     * @hash   839401399
     * @symbol  ??0LevelEventPacket\@\@QEAA\@W4LevelEvent\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI LevelEventPacket(enum class LevelEvent, class Vec3 const &, int);

};