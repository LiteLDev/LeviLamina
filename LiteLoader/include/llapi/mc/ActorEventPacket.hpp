/**
 * @file  ActorEventPacket.hpp
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getId\@ActorEventPacket\@\@UEBA?AW4MinecraftPacketIds\@\@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl 2
     * @symbol ?getName\@ActorEventPacket\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string getName() const;
    /**
     * @vftbl 3
     * @symbol ?write\@ActorEventPacket\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl 7
     * @symbol ?_read\@ActorEventPacket\@\@EEAA?AUExtendedStreamReadResult\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual struct ExtendedStreamReadResult _read(class ReadOnlyBinaryStream &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTOREVENTPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorEventPacket();
#endif
    /**
     * @symbol ??0ActorEventPacket\@\@QEAA\@VActorRuntimeID\@\@W4ActorEvent\@\@H\@Z
     */
    MCAPI ActorEventPacket(class ActorRuntimeID, enum class ActorEvent, int);
    /**
     * @symbol ??0ActorEventPacket\@\@QEAA\@XZ
     */
    MCAPI ActorEventPacket();

};
