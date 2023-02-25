/**
 * @file  SetActorMotionPacket.hpp
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
     * @symbol  __unk_destructor_0
     */
    virtual ~SetActorMotionPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@SetActorMotionPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@SetActorMotionPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@SetActorMotionPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@SetActorMotionPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0SetActorMotionPacket\@\@QEAA\@XZ
     */
    MCAPI SetActorMotionPacket();
    /**
     * @symbol  ??0SetActorMotionPacket\@\@QEAA\@AEBVActor\@\@\@Z
     */
    MCAPI SetActorMotionPacket(class Actor const &);

};