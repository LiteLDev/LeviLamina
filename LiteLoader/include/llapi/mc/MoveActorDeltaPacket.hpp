/**
 * @file  MoveActorDeltaPacket.hpp
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
 * @brief MC class MoveActorDeltaPacket.
 *
 */
class MoveActorDeltaPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEACTORDELTAPACKET
public:
    class MoveActorDeltaPacket& operator=(class MoveActorDeltaPacket const &) = delete;
    MoveActorDeltaPacket(class MoveActorDeltaPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MoveActorDeltaPacket();
    /**
     * @hash   1510374386
     * @vftbl  1
     * @symbol  ?getId\@MoveActorDeltaPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -1425618273
     * @vftbl  2
     * @symbol  ?getName\@MoveActorDeltaPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   88141320
     * @vftbl  3
     * @symbol  ?write\@MoveActorDeltaPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -1316321640
     * @vftbl  6
     * @symbol  ?_read\@MoveActorDeltaPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -2145953896
     * @symbol  ??0MoveActorDeltaPacket\@\@QEAA\@XZ
     */
    MCAPI MoveActorDeltaPacket();
    /**
     * @hash   -1016848479
     * @symbol  ??0MoveActorDeltaPacket\@\@QEAA\@AEBVMoveActorDeltaData\@\@\@Z
     */
    MCAPI MoveActorDeltaPacket(class MoveActorDeltaData const &);

};