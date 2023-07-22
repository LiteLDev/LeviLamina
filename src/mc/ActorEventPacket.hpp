/**
 * @file  ActorEventPacket.hpp
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
 * @brief MC class ActorEventPacket.
 *
 */
class ActorEventPacket : public Packet {

#define AFTER_EXTRA
// Add Member There
public:
    unsigned long long entityId;
    unsigned char actorEvent;
    int eventData;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTOREVENTPACKET
public:
    class ActorEventPacket& operator=(class ActorEventPacket const &) = delete;
    ActorEventPacket(class ActorEventPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ActorEventPacket();
    /**
     * @vftbl  1
     * @symbol  ?getId\@ActorEventPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol  ?getName\@ActorEventPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol  ?write\@ActorEventPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol  ?_read\@ActorEventPacket\@\@EEAA?AW4StreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol  ??0ActorEventPacket\@\@QEAA\@XZ
     */
    MCAPI ActorEventPacket();
    /**
     * @symbol  ??0ActorEventPacket\@\@QEAA\@VActorRuntimeID\@\@W4ActorEvent\@\@H\@Z
     */
    MCAPI ActorEventPacket(class ActorRuntimeID, enum class ActorEvent, int);

};