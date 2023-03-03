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
     * @vftbl  1
     * @symbol  ?getId\@MoveActorDeltaPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@MoveActorDeltaPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@MoveActorDeltaPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@MoveActorDeltaPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0MoveActorDeltaPacket\@\@QEAA\@XZ
     */
    MCAPI MoveActorDeltaPacket();
    /**
     * @symbol  ??0MoveActorDeltaPacket\@\@QEAA\@AEBVMoveActorDeltaData\@\@\@Z
     */
    MCAPI MoveActorDeltaPacket(class MoveActorDeltaData const &);

};