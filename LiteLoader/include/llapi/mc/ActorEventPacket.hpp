/**
 * @file  ActorEventPacket.hpp
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
     * @symbol __unk_destructor_0
     */
    virtual ~ActorEventPacket();
    /**
     * @hash   2065121281
     * @vftbl  1
     * @symbol ?getId@ActorEventPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @hash   -1184108882
     * @vftbl  2
     * @symbol ?getName@ActorEventPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   798243161
     * @vftbl  3
     * @symbol ?write@ActorEventPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -548932759
     * @vftbl  6
     * @symbol ?_read@ActorEventPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -516321255
     * @symbol ??0ActorEventPacket@@QEAA@XZ
     */
    MCAPI ActorEventPacket();
    /**
     * @hash   -1872354328
     * @symbol ??0ActorEventPacket@@QEAA@VActorRuntimeID@@W4ActorEvent@@H@Z
     */
    MCAPI ActorEventPacket(class ActorRuntimeID, enum ActorEvent, int);

};